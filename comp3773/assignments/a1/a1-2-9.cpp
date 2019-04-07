/*
 * File:    a1-2-9.cpp   
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    January 28, 2019
 * Purpose: To write a function that takes user input, creates a 1d array of
 *          the specified size, and then takes in user-specified values to
 *          populate the array. It then computes the average of the given
 *          values and returns the result.
 * 
 * Notes:   
 * 
 */

#include <iostream> 
#include <limits>
using namespace std;

double
average(int array[], int array_length)
{
    int sum = 0;
    double avg;
    for (int j = 0; j < array_length; j++)
    {
        sum += array[j];
    }
    avg = (double) sum / (double) array_length;
    return avg;
}

int
main()
{
    cout << "The program will average the values given by the user.\n";
    // Hardcoded Testing
    int test_array_1[] = {1, 3, 5};
    int test_array_2[] = {10, 20, 30, 40, 50};
    int test_array_3[] = {1};
    int test_array_4[] = {1, 7, 52, 48, 5, 25};
    double avg_1, avg_2, avg_3, avg_4;

    cout << "Hardcoded Testing: \n";
    avg_1 = average(test_array_1, 3);
    cout << "Average of {1, 3, 5} = " << avg_1 << "\n";
    avg_2 = average(test_array_2, 5);
    cout << "Average of {10, 20, 30, 40, 50} = " << avg_2 << "\n";
    avg_3 = average(test_array_3, 1);
    cout << "Average of {1} = " << avg_3 << "\n";
    avg_4 = average(test_array_4, 6);
    cout << "Average of {1, 7, 52, 48, 5, 25} = " << avg_4 << "\n\n";


    // User Testing
    cout << "User Testing: \n";
    while(1)
    {
        int array_size;
        cout << "Please input a valid array size. ";
        cin >> array_size;
        while(!cin >> array_size || array_size <= 0)
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please input a valid array size. ";
            cin >> array_size;
        }

        int * int_array = new int[array_size];
        for (int i = 0; i < array_size; i++)
        {
            cout << "Please input the " << (i + 1)
                 << "-th value to add to the array. ";
            cin >> int_array[i];
            while(!cin >> int_array[i])
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Please input the " << (i + 1)
                     << "-th value to add to the array. ";
                cin >> int_array[i];
            }
        }

        double res = average(int_array, array_size);
        cout << "The average of the given values is: " << res << "\n\n";
    }
}