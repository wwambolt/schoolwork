/*
 * File:    Fraction.cpp   
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    January 28, 2019
 * Purpose: To write a class representing Fraction, a constructor for the
 *          class, and four functions to add, subtract, multiply, and
 *          divide fractons. Fraction are always reduced to lowest terms.
 * 
 * Notes:   
 * 
 */

#include <iostream>
#include <limits>
#include "Fraction.h"
using namespace std;

// GCD function for simplifying Fraction
int
gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

Fraction::Fraction()
{
    top = 1;
    bottom = 1;
}

Fraction::Fraction(int numerator, int denominator)
{
    if (denominator == 0)
    {
        fprintf(stderr, "Fraction cannot have a denominator of 0.\n");
        exit(EXIT_FAILURE);
    }

    top = numerator;
    bottom = denominator;
}


Fraction Fraction::add_frac(Fraction first, Fraction second)
{
    // Sum formula: a/b + c/d = (ad + cb)/bd
    int a, b, c, d, e, f, g;
    a = first.top;
    b = first.bottom;
    c = second.top;
    d = second.bottom;
    e = (a*d) + (b*c);
    f = (b*d);
    g = gcd(e, f);
    e = (e / g);
    f = (f / g);

    Fraction newfrac(e, f);
    return newfrac;
}
Fraction Fraction::sub_frac(Fraction first, Fraction second)
{
    // Difference formula: a/b - c/d = (ad - cb)/bd
    int a, b, c, d, e, f, g;
    a = first.top;
    b = first.bottom;
    c = second.top;
    d = second.bottom;
    e = (a*d) - (b*c);
    f = (b*d);
    g = gcd(e, f);
    e = (e / g);
    f = (f / g);

    Fraction newfrac(e, f);
    return newfrac;
}
Fraction Fraction::mul_frac(Fraction first, Fraction second)
{
    // Multiplication formula: a/b * c/d = ac/bd
    int a, b, c, d, e, f, g;
    a = first.top;
    b = first.bottom;
    c = second.top;
    d = second.bottom;
    e = (a*c);
    f = (b*d);
    g = gcd(e, f);
    e = (e / g);
    f = (f / g);

    Fraction newfrac(e, f);
    return newfrac;
}
Fraction Fraction::div_frac(Fraction first, Fraction second)
{
    // Division formula: (a/b) / (c/d) = ad/bc
    int a, b, c, d, e, f, g;
    a = first.top;
    b = first.bottom;
    c = second.top;
    d = second.bottom;
    e = (a*d);
    f = (b*c);
    g = gcd(e, f);
    e = (e / g);
    f = (f / g);

    Fraction newfrac(e, f);
    return newfrac;
}

int
main()
{
    Fraction frac1(1, 3);
    Fraction frac2(2, 7);
    Fraction frac3, frac4, frac5, frac6;
    char option, oper;

    cout << "Hardcoded Testing\n";
    frac3 = frac3.add_frac(frac1, frac2);
    cout << frac1.top << "/" << frac1.bottom << " + "
         << frac2.top << "/" << frac2.bottom << " = "
         << frac3.top << "/" << frac3.bottom;
    cout << "\n";

    frac3 = frac3.sub_frac(frac1, frac2);
    cout << frac1.top << "/" << frac1.bottom << " - "
         << frac2.top << "/" << frac2.bottom << " = "
         << frac3.top << "/" << frac3.bottom;
    cout << "\n";

    frac3 = frac3.mul_frac(frac1, frac2);
    cout << frac1.top << "/" << frac1.bottom << " * "
         << frac2.top << "/" << frac2.bottom << " = "
         << frac3.top << "/" << frac3.bottom;
    cout << "\n";

    frac3 = frac3.div_frac(frac1, frac2);
    cout << frac1.top << "/" << frac1.bottom << " / "
         << frac2.top << "/" << frac2.bottom << " = "
         << frac3.top << "/" << frac3.bottom;
    cout << "\n\n";

    cout << "User Testing\n";
    while (1)
    {
        cout << "Please input a numerator.\n";
        cin >> frac4.top;
        while (!cin >> frac4.top)
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please input a numerator.\n";
            cin >> frac4.top;
        }

        cout << "Please input a denominator.\n";
        cin >> frac4.bottom;
        while (!cin >> frac4.bottom || frac4.bottom == 0)
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please input a denominator.\n";
            cin >> frac4.bottom;
        }

        cout << "Please input another numerator.\n";
        cin >> frac5.top;
        while (!cin >> frac5.top)
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please input another numerator.\n";
            cin >> frac5.top;
        }

        cout << "Please input another denominator.\n";
        cin >> frac5.bottom;
        while (!cin >> frac5.bottom || frac5.bottom == 0)
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please input another denominator.\n";
            cin >> frac5.bottom;
        }

        cout << "What operation would you like to perform?.\n"
             << "Input 'a' for addition.\n"
             << "Input 's' for subtraction.\n"
             << "Input 'm' for multiplication.\n"
             << "Input 'd' for division.\n";
        cin >> option;
        while (!cin >> option)
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "What operation would you like to perform?.\n"
                 << "Input 'a' for addition.\n"
                 << "Input 's' for subtraction.\n"
                 << "Input 'm' for multiplication.\n"
                 << "Input 'd' for division.\n";
            cin >> option;
        }

        switch (option)
        {
            case 'a':
                frac6 = frac6.add_frac(frac4, frac5);
                oper = '+';
                break;
            case 's':
                frac6 = frac6.sub_frac(frac4, frac5);
                oper = '-';
                break;
            case 'm':
                frac6 = frac6.mul_frac(frac4, frac5);
                oper = '*';
                break;
            case 'd':
                frac6 = frac6.div_frac(frac4, frac5);
                oper = '/';
                break;
        }

        cout << frac4.top << "/" << frac4.bottom << " " << oper << " "
             << frac5.top << "/" << frac5.bottom << " = " 
             << frac6.top << "/" << frac6.bottom << "\n\n";
    }
}