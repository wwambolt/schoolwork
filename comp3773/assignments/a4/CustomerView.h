// RefinedAbstraction module component

#ifndef CUST_H
#define CUST_H

#include "View.h"

class CustomerView : public View
{
    public:
        CustomerView(Layout * Layout);
        void render(void);
        void add(Product *products, int quantity);
};

#endif