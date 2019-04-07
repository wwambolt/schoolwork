/* File foo.  */
#ifndef TREE_SEEN
#define TREE_SEEN

/*
 * File:    TreeSet.h
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    February 4, 2019
 * Notes:   Some functions left unimplemented and so throw compiler warnings,
 *          but the program runs.
 * 
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class TreeNode;

class TreeSet
{
    public:
        int tree_size;

        TreeSet();
        TreeSet(string sa1[], int size);
        ~TreeSet();
        // Copy constructor - deep copies
        TreeSet(const TreeSet &old_obj); 
        // Assignment operator - deep copies
        TreeSet& operator=(const TreeSet& other);
        bool add(const string& s);
        void clear();
        bool contains(const string& s) const;
        bool isEmpty() const;
        bool remove(const string& s);
        int size() const;
        int toArray(string sa[]) const;
    private:
    	TreeNode * root;
};

#endif