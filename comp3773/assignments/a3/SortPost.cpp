#ifndef SORT_POST_H
#define SORT_POST_H

#include "AbstractSort.h"
#include "Customer.h"

// Sort by postal code
class SortPost: public AbstractSort
{
    /* virtual */
    int needSwap(Customer a, Customer b)
    {
        return (a.getPostalCode() > b.getPostalCode());
    }
};

#endif