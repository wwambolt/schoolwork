#ifndef CUSTOMER
#define CUSTOMER

/*
 * File:    Customer.h
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    February 24, 2019
 * Purpose: To implement a customer class that overloads the <<
 *          and >> operators.
 * 
 * Notes:   
 */

#include <iostream>
#include <string>
#include <string>
using namespace std;

class Customer
{
    public:
        Customer();
        string getGivenName();
        string getFamilyName();
        string getAddress1();
        string getAddress2();
        string getCity();
        string getProvince();
        string getPostalCode();
        double getAmountOwed();
        bool readFields(string arr[]);
        string writeFields();
    private:
        string family_name_;
        string given_name_;
        string address_line_1_;
        string address_line_2_;
        string city_;
        string province_;
        string postal_code_;
        double amount_owed_;
};

ostream & operator<< (ostream &out, Customer &cust);
istream & operator>> (istream &in, Customer &cust);

#endif