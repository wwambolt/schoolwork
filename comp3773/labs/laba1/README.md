Lab Assignment 1

What you need to do:

Complete exercise 2-2 from page 58 of the text:

Write a program that reads integer values from standard input and writes to standard output the smallest of the input values and the average input value. Reading should stop when either a value equal to -1 or greater than 100 is encountered; it should also stop when an incorrect integer value (that is, anything that is not an integer value) is entered. If there is no integer value in the input, the program should output the message "no integer values found."

Clarification: the program prints /either/ the minimum value and average, /or/ the "no integer..." message. The latter is printed only when there is no data to work with. (The input that causes reading to stop is a sentinel value (not data), and so is not included in the other calculations.)

Hint: You can start from one of the RPN calculator programs from chapter 1, or you can use the fact that the fail state for an input stream is interpreted as false by C++ control structures.

For labs (including this one) you only need to submit the source code file(s).

And in spite of what it might say below the only valid format for the file you submit is plain text, in the form of a .cpp file.
