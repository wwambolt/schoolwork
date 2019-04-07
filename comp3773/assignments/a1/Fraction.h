/* File foo.  */
#ifndef FILE_FOO_SEEN
#define FILE_FOO_SEEN

/*
 * File:    Fraction.h
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    January 29, 2019
 * Purpose: To write a class representing Fraction, a constructor for the
 *          class, and four functions to add, subtract, multiply, and
 *          divide fractons. Fraction are always reduced to lowest terms.
 * 
 * Notes:   
 * 
 */

#include <iostream>
#include <limits>
using namespace std;

int
gcd(int a, int b);

class
Fraction
{
public:
    int top;
    int bottom;

    Fraction();

    Fraction(int numerator, int denominator);
    
    Fraction
    add_frac(Fraction first, Fraction second);
    
    Fraction
    sub_frac(Fraction first, Fraction second);
    
    Fraction
    mul_frac(Fraction first, Fraction second);
    
    Fraction
    div_frac(Fraction first, Fraction second);

};

#endif /* !FILE_FOO_SEEN */