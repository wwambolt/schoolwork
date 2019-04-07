#ifndef ABSTRACT_SORT_H
#define ABSTRACT_SORT_H

#include "Customer.h"

// Modified to work with customer arrays
class AbstractSort
{
    public:
        void sort(Customer v[], int n);
    private:
        virtual int needSwap(Customer, Customer) = 0;
        void doSwap(Customer& a, Customer& b);
};

#endif
