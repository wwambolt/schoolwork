A3
Part 1

Create a minimal Customer class.  This class must have fields for:

•family name •given names •address line 1 •address line 2 •city •province •postal code •amount owed The class needs getters, but does not need setters.

The class must, however, be readable using the >> operator and writable using the << operator.  Do not use a friend function to overload the operators.  Instead create suitable read and write methods and then overload the operators using a non-friend function. 

The format for reading (and writing) Customer records is a bar-delimited line of data, with the fields in the order shown above.  For example:

|Tom| Lee|123 Main Str.||Wolfville|NS|B3N 2R1|119.95| Notice that the address second line is empty for this record.  Also notice that the values may contain spaces.  Spaces before the first bar can (and should) be ignored.  (Hint:  recall the ignore method and the getline function  -- both of which can be given a separator character.)  •It is possible that more than one record could be on one line, but there will be no line breaks within the record unless they are part of the data. •The amount-owed field will not be empty.  If necessary a 0 (or 0.00 or like) will be given. You should prepare a data file with several records, and a test program that reads in records until input fails, echoing each item to the screen.  For example:

Customer c;

while (cin >> c) cout << c << endl;

Note: the data type for cin is istream. 

Part 2

Adapt the AbstractSort class (here, which currently sorts int arrays) to sort Customer arrays.  Create four sorter sub-classes (following the template design pattern) to sort the array:

1.by name (in alphabetical order by family name, with ties decided by given names). 2.by postal code (in alphabetical order). 3.by amount owed, from highest to lowest. 4.by amount owed, from lowest to highest. Create a program that reads in an array of Customer records, then sorts and prints it in each of the four orders. 

Pass in a tar file containing:

•your Customer class (header and implementation files); •your (revised) AbstractSort class (header and implementation files); and •your four sorter sub-classes (for which we want just the .cpp file for each, containing both class declaration and definition (as with SortUp.cpp and SortDown.cpp in the code linked above). You do not need to hand in your testing code.  As usual, your tar file should contain only those files (no folders) and should not be compressed in any way.  Also, it should be named with your student number followed by -a3.tar.
