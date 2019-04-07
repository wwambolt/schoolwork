#include "AbstractSort.h"

#include "Customer.h"

// Modified to work with customer arrays
void AbstractSort::sort(Customer v[], int n)
{
    // shell sort
    for (int g = n / 2; g > 0; g /= 2)
        for (int i = g; i < n; i++)
            for (int j = i - g; j >= 0; j -= g)
                if (needSwap(v[j], v[j + g]))
                    doSwap(v[j], v[j + g]);
}

void AbstractSort::doSwap(Customer& a, Customer& b)
{
    Customer t = a;
    a = b;
    b = t;
}

