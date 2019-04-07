// Abstraction class header file

#ifndef VIEW_H
#define VIEW_H

#include "Product.h"
#include "Layout.h"

class View
{
    public:
        virtual void render() = 0;
        virtual void add(Product *products, int quantity) = 0;
    protected:
        Product * items_;
        Layout * chosen_layout_;
        int q_;
};

#endif
