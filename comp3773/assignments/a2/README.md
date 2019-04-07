Assignment 2
Create a class TreeSet to hold a set of strings.  TreeSets contain copies of the strings inserted so that the strings cannot be changed while in the set.  (Changing the strings inside the set could break the binary search tree.) The strings are case sensitive, so "Hello" and "hello" are distinct within the set. 

TreeSet implements the following methods:

•bool add(const string& s) -- add s to the set, if it's not already there; return true if the set changed, false otherwise •void clear() -- remove all elements from the set •bool contains(const string& s) const -- test whether s is in the set •bool isEmpty() const -- test whether the set is empty •bool remove(const string& s) -- remove s from the set, if it was there; return true if the set changed, false otherwise •int size() const -- return the number of strings in the set •int toArray(string sa[]) const -- put the elements of the set into the array sa; assume that sa has sufficient room (it's the client's responsibility to check); you may place the strings in any order that's convenient for you (the implementer) The class also includes a zero-argument constructor (creating an empty set), a constructor that takes an array of string and its size (creating a set containing each element of the array), copy constructor, assignment operator, and destructor. The copy constructor and assignment operator make deep copies.

TreeSet implements the set using a binary search tree. (The tree does not need to be balanced.) The implementation of the tree node class is hidden from the client. There are no memory leaks.

Pass in a tar file containing these files:

•TreeSet.h •TreeSet.cpp

Name the tar file as before -- with your student number followed by "-a2.tar" (e.g. 100000666-a2.tar).  DO NOT tar a folder containing the files; the command tar -tf 100000666-a2.tar should list only the files shown above. Do not compress the files (by, for example, creating a .tgz file).  Our goal is easy automation of the extraction and testing process.

Note that I am not asking for a driver program or a script of compiling/running that driver program. We will have our own driver program for testing your code. You should just make sure your code satisfies the requirements.
