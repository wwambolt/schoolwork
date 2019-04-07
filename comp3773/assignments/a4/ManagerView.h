// RefinedAbstraction module component

#ifndef MANA_H
#define MANA_H

#include "View.h"

class ManagerView : public View
{
    public:
        ManagerView(Layout * layout);
        void render(void);
        void add(Product *products, int quantity);
};
#endif