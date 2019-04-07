#ifndef SORT_AMT_DOWN_H
#define SORT_AMT_DOWN_H

#include "AbstractSort.h"
#include "Customer.h"

// Sort by amount owed in descending order
class SortAmountDown: public AbstractSort
{
    /* virtual */
    int needSwap(Customer a, Customer b)
    {
        return (a.getAmountOwed() < b.getAmountOwed());
    }
};

#endif