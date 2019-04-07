Assignment 4
Use the Bridge pattern to create a 2x2 hierarchy for printing product information.  Use these starter files.  See the documentation.

Details

A small company requires a program to show product information to customers and managers.  The information must be shown sometimes on a web page and other times on a console screen.  Because there are two different ways of breaking down this information (by person viewing or by viewing medium), it was decided to use a Bridge pattern.  There will be an abstract View class that includes as an instance variable a pointer to a particular Layout object (from a class that implements the Layout interface).

Some code already exists:

•driver.cpp -- a program that creates some sample data and displays it in all four possible configurations. •Product.h and Product.cpp -- the class for the company's Product information.

Each Product object contains three pieces of information:  the product code, the product name, and the quantity of that product on hand.  The class has overloaded the input operator, but you don't actually need it. (Feel free, however, to create your own extra driver file that reads data from a file.  I'll be doing that when I test your code.)

•Layout.h -- the interface to use for the Layout classes. Your job is to create the remaining needed files: •View.h and View.cpp -- the abstract class representing which person is viewing the information.  It is subtyped into: ?ManagerView.h and ManagerView.cpp -- which shows all the Product information on the screen. ?CustomerView.h and CustomerView.cpp -- which shows only the Product name. •WebLayout.h and WebLayout.cpp -- which implement the Layout interface for presenting information on a Web page. •ScreenLayout.h and ScreenLayout.cpp -- which implement the Layout interface for presenting information on a console screen. The code you create must match the pre-existing code. 

Managers will want to see all three pieces of information.  Customers will see only the name of the product.  When formatted for the web, the output includes HTML markup for a table.  When formatted for the console, the table is "drawn" around the product information using "+", "-" and "|" characters. 

The file output.txt shows the expected output of the driver program.  You should consult it as you read the descriptions below.

The Layout interface consists of eight methods. The first two are for setting the parameters of the table, and must be called before any part of the table is printed:

•setWidth(int) -- indicates the width of the table as a percentage of the screen width. •setColumns(int) -- indicates how many columns are in the table to be shown. The remaining methods are for printing the table itself. •putHeader() -- prints out the top-most part of the table.  For the WebLayout that's the line "<table border width=#%>" (where # is the width of the table as a percentage of the screen width).  For the ScreenLayout that's the line "+---...---+" at the top of the table.  For the ScreenLayout the screen is considered to be 60 characters wide, so the line will have 60 characters if the table width was set to 100 (100*60/100 = 60), but only 24 characters if the width was set to 40 (40*60/100 = 24). •putLineStart() -- prints the beginning of a row of the table.  For the WebLayout that's the line " <tr>". For the ScreenLayout that's the "| " (bar followed by one space) at the beginning of the line. •putElement(const string& e, int w) -- prints a string in one cell of the table.  For the WebLayout that's the line "  <td width=#%>...</td>" (where the # is the width of the cell as a percentage of the table width, and the ... is the element to be printed). For the ScreenLayout that's the element padded out to the correct number of spaces, followed by " | " (space, bar, space).  (See below about calculating the correct number of spaces).

•putElement(int n, int w) -- prints a number in cell of the table.  This is just like the item above, except that for the ScreenLayout the number is padded with spaces on the left. •putLineEnd() -- prints the end of the table row. •putFooter() -- prints the end of the table. (I've left the last two parts for you to figure out.)

When printing an element for the ScreenLayout you need to take into account the edges of the table and its cells.  For example, in a table with three columns there will be two characters at the beginning of the line ("| "), two more at the end (" |" -- there's also a trailing space, but we can ignore it because the "|" is the edge of the table), and three characters (" | ") in between each of the columns, for a total of ten characters.  If the table is 60 characters wide (100%), then only 50 of those (60 - 10) are available for the table elements.  Thus if the cell is supposed to be 40% of the table width, it must be 40% of 50, not 40% of 60. Thus you will need to use the table width (in characters) and the number of columns to calculate the proper width of the cell.

To pad the element with spaces, you should include the iomanip library.  It has "left", "right", and "setw(#)" manipulators to allow you to left/right justify the following item in a field # characters wide.  For example "cout << left << setw(10) << 5" prints the number 5 left-justified in a field 10 characters wide.

Finally, the WebLayout class has no need to know the number of columns. The number printed in the width field for the table cell is the number passed in to the putElement method. The setColumns method is provided only because other classes need it.
