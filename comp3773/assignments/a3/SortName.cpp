#ifndef SORT_NAME_H
#define SORT_NAME_H

#include "AbstractSort.h"
#include "Customer.h"

// Sort by name, obviously
class SortName: public AbstractSort
{
    /* virtual */
    int needSwap(Customer a, Customer b)
    {
        // Break family name ties using given name
        if (a.getFamilyName() == b.getFamilyName())
            return (a.getGivenName() > b.getGivenName());
        else if (a.getFamilyName() > b.getFamilyName())
            return (a.getFamilyName() > b.getFamilyName());
         return 0;
    }
};

#endif