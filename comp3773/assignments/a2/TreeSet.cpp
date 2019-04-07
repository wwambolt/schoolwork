/*
 * File:    TreeSet.cpp   
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    February 4, 2019
 * Purpose: To implement a Treeset as a BST.
 * 
 * Notes:   Some functions left unimplemented and so throw compiler warnings,
 *          but the program runs.
 */

#include <iostream>
#include <string>
#include <iomanip>
#include "TreeSet.h"
#include <vector> 
using namespace std;

class TreeNode
{
    friend class TreeSet;
    public:
        static std::vector<string> vec;

        TreeNode();
        TreeNode(const string& s);
        ~TreeNode();
        static TreeNode * minValueNode(TreeNode * node);
        static void inorder(TreeNode * root);
        static TreeNode * insert(TreeNode * node, const string& value);
        static TreeNode * remove(TreeNode * node, const string& value);
        static bool search(TreeNode * root, const string& value);
    private:
        string key;
        TreeNode * left;
        TreeNode * right;
};

std::vector<string> TreeNode::vec;

TreeNode::TreeNode()
{
    key = "";
    left = NULL;
    right = NULL;
}
TreeNode::TreeNode(const string& s)
{
    key = s; 
    left = NULL;
    right = NULL;
}
TreeNode::~TreeNode()
{
    key = "";
    left = NULL;
    right = NULL;
}
TreeNode * TreeNode::minValueNode(TreeNode * node)
{
    TreeNode * temp = node;

    // Loop down to find the leftmost leaf
    while (temp->left != NULL)
        temp = temp->left;
    return temp;
}
void TreeNode::inorder(TreeNode * root)
{
    if (root != NULL) 
    { 
        inorder(root->left); 
        vec.push_back(root->key);
        inorder(root->right); 
    }
}
// Iterative search function for BST
bool TreeNode::search(TreeNode * root, const string& value) 
{
    while (root != NULL)
    {
        if (root->key == value)
            break;

        if (value > root->key)
            root = root->right;
        else                  
        if (value < root->key)
            root = root->left;
    }
    if (root == NULL)
        return false;

    if (root->key == value)
        return true;

    return false;
}
TreeNode * TreeNode::insert(TreeNode * node, const string& value)
{

    // Matches the string to the key already in the treeset
    if (node->search(node, value) == true)
    {
        return node;
    }
    // If root is null, create a new node and assign it to root
    if (node == NULL)
        node = new TreeNode(value);

    // recur down left subtree
    if (node->key > value)
    {
        if (!node->left)
            node->left = new TreeNode(value);
        else
            insert(node->left, value);
    }
    // recur down right subtree
    else
    {
        if (!node->right)
            node->right = new TreeNode(value);
        else
            insert(node->right, value);
    }
    return node;
}
TreeNode * TreeNode::remove(TreeNode * node, const string& value)
{
    // Failure to match the string to the key
    if (node->search(node, value) == false)
    {
        return node;
    }

    // base case 
    if (node == NULL)
        return node;
    // If value is smaller than nodes key recur down left subtree
    if (value < node->key) 
        node->left = remove(node->left, value);
    // If value is smaller than nodes key recur down left subtree
    else if (value > node->key)
        node->right = remove(node->right, value);
    // Node must now match
    else
    {
        // Node is a leaf, so just delete node
        if ( (node->right == NULL) && (node->left == NULL) )
        {
            node->~TreeNode();
            node = NULL;
        }
        // Node has a single child, so copy child to node and delete child
        else if (node->right == NULL)
        {
            TreeNode * temp = node;
            node = node->left;
            temp->~TreeNode();
        }
        else if (node->left == NULL)
        {
            TreeNode * temp = node;
            node = node->right;
            temp->~TreeNode();
        }
        // Node has two children
        else
        {
            // Get inorder successor
            TreeNode * temp = TreeNode::minValueNode(node->right);
            // Copy key of successor to node
            node->key = temp->key;
            // Delete the successor
            node->right = remove(node->right, temp->key);
        }
    }
    return node;
}




TreeSet::TreeSet()
{
    root = NULL; 
    tree_size = 0;
}
TreeSet::TreeSet(string sa[], int size)
{
    root = NULL;
    tree_size = size;
    for (int i = 0; i < tree_size; i++)
        TreeNode::insert(root, sa[i]);
        //cout << sa[i];
}
TreeSet::~TreeSet()
{
    ;
}
TreeSet::TreeSet(const TreeSet &old_obj)
{
    ;
}
TreeSet& TreeSet::operator=(const TreeSet& other)
{
    ;
}
bool TreeSet::add(const string& s)
{
    if (root->search(root, s) == false)
    {
        if (root)
            root = TreeNode::insert(root, s);
        else
            root = new TreeNode(s);
        tree_size++;
        return true;
    }
    else
    {
        return false;
    }
}
void TreeSet::clear()
{
    ;
}
bool TreeSet::contains(const string& s) const
{

    if (TreeNode::search(root, s) == true)
        return true;
    else
        return false;
}
bool TreeSet::isEmpty() const
{
    if ( (root == NULL) && (tree_size == 0))
        return true;
    else
        return false;
}
bool TreeSet::remove(const string& s)
{

    if (root->search(root, s) == true)
    {
        if (root)
        {
            root = TreeNode::remove(root, s);
        }
        else
            root = NULL;
        tree_size--;
        return true;
    }
    else
    {
        return false;
    }
}
int TreeSet::size() const
{
    return tree_size;
}
int TreeSet::toArray(string sa[]) const
{
    TreeNode::vec.resize(this->size());
    TreeNode::inorder(root);
    for(int j = 0; j < this->size(); j++)
        //cout << TreeNode::vec.at(j);
        sa[j] = TreeNode::vec[j];
    return EXIT_SUCCESS;
}