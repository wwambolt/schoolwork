/*
 * File:    Customer.cpp
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    February 24, 2019
 * Purpose: To implement a customer class and functions that overload
 *          the << and >> operators.
 * 
 * Notes:   
 */

#include <iostream>
#include <string>
#include "Customer.h"
using namespace std;

#define REASONABLE_LIMIT 100000

Customer::Customer()
{
    given_name_ = "";
    family_name_ = "";
    address_line_1_ = "";
    address_line_2_ = "";
    city_ = "";
    province_ = "";
    postal_code_ = "";
    amount_owed_ = 0.00;
}
string Customer::getGivenName()
{
    return given_name_;
}
string Customer::getFamilyName()
{
    return family_name_;
}
string Customer::getAddress1()
{
    return address_line_1_;
}
string Customer::getAddress2()
{
    return address_line_2_;
}
string Customer::getCity()
{
    return city_;
}
string Customer::getProvince()
{
    return province_;
}
string Customer::getPostalCode()
{
    return postal_code_;
}
double Customer::getAmountOwed()
{
    return amount_owed_;
}
bool Customer::readFields(string arr[])
{
    // Read info from array into members
    // Address line 2 can be empty
    for(int i = 0; i < 8; i++)
    {
        if (i == 3)
            continue;
        // Tommy Walker told me about the "find_first_not_of()" function 
        if (arr[i].find_first_not_of(' ') == arr[i].npos)
        {
            cerr << "Fields other than address line 2 can't be empty" << endl;
            return false;
        }
    }

    family_name_ = arr[0];
    given_name_ = arr[1];
    address_line_1_ = arr[2];
    address_line_2_ = arr[3];
    city_ = arr[4];
    province_ = arr[5];
    postal_code_ = arr[6];
    amount_owed_ = stod(arr[7]);

    return true;
}
string Customer::writeFields()
{
    // Concatenate a string of data to output
    string customer_data;
    customer_data = "|" + getFamilyName()
                  + "|" + getGivenName()
                  + "|" + getAddress1()
                  + "|" + getAddress2()
                  + "|" + getCity()
                  + "|" + getProvince()
                  + "|" + getPostalCode()
                  + "|" + to_string(getAmountOwed()) + "|";
    return customer_data;
}

ostream & operator<< (ostream &out, Customer &cust)
{
    // Return the out object with the formatted data line
    out << cust.writeFields() << endl;
    return out;
}
istream & operator>> (istream &in, Customer &cust)
{
    // Read in a line delimited by |
    string input;
    string cust_data[8];
    in.ignore(REASONABLE_LIMIT,'|');
    int i = 0;

    while (i < 8)
    {
        getline(in, input, '|');
        cust_data[i] = input;
        i++;
    }

    cust.readFields(cust_data);

    return in;
}