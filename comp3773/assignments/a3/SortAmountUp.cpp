#ifndef SORT_AMT_UP_H
#define SORT_AMT_UP_H

#include "AbstractSort.h"
#include "Customer.h"

// Sort by amount owed in ascending order
class SortAmountUp: public AbstractSort
{
    /* virtual */
    int needSwap(Customer a, Customer b)
    {
        return (a.getAmountOwed() > b.getAmountOwed());
    }
};

#endif