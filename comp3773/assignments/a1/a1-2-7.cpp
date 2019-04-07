/*
 * File:    a1-2-7.cpp   
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    January 28, 2019
 * Purpose: To write a function recursively implementing the calculation of
 *          numbers raised to powers.
 * 
 * Notes:   
 * 
 */

#include <iostream> 
#include <stdio.h>
#include <limits>
using namespace std;

double
power(double x, int n)
{
    if (n == 0)
        return 1;
    //For even values compute x!(n/2) * x!(n/2)
    else if ((n % 2) == 0)
        return power(x, n/2) * power(x, n/2);
    // For odd values compute x * x!(n/2) * X!(n/2)
    else
        return x * power(x, n/2) * power(x, n/2);
}

int
main()
{
    // Hard-coded tests
    cout << "Hard-coded tests.\n";
    cout << 2 << "^" << 0 << " = " << power(2, 0) << "\n";
    cout << 3 << "^" << 1 << " = " << power(3, 1) << "\n";
    cout << 5 << "^" << 25 << " = " << power(5, 25) << "\n";
    cout << 9 << "^" << 32 << " = " << power(9, 32) << "\n";
    cout << "\n";

    // Looped testing
    cout << "Looped testing.\n";
    while (1)
    {
        double base_in;
        int exp_in;
        double result;

        cout << "Please input a base.\n";
        //cin >> base_in;
        while (!(cin >> base_in))
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please input a base.\n";
            //cin >> base_in;
        }

        cout << "Please input a positive exponent.\n";
        cin >> exp_in;
        while (!cin >> exp_in || exp_in < 0)
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please input a positive exponent.\n";
            cin >> exp_in;
        }

        result = power(base_in, exp_in);
        cout << base_in << "^" << exp_in << " = " << result << "\n\n";
    }
    return EXIT_SUCCESS;
}