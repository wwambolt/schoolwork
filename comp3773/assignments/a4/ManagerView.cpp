// RefinedAbstraction module component

#include <iostream>
#include "ManagerView.h"
#include "Layout.h"
#include "Product.h"

ManagerView::ManagerView(Layout * layout)
{
    // Set member variable equal to given pointer
    chosen_layout_ = layout;
}

void
ManagerView::render(void)
{
    // Width given as a percentage
    chosen_layout_->setWidth(100);
    chosen_layout_->setColumns(3);
    chosen_layout_->putHeader();
    // Put as many rows as there are products to display
    for (int i = 0; i < q_; i++)
    {
        chosen_layout_->putLineStart();
        chosen_layout_->putElement(items_->getCode(), 30);
        chosen_layout_->putElement(items_->getName(), 50);
        chosen_layout_->putElement(items_->getQuantity(), 20);
        chosen_layout_->putLineEnd();
        items_++;
    }
    chosen_layout_->putFooter();    
}

void
ManagerView::add(Product * products, int quantity)
{
    q_ = quantity;
    items_ = products;
}
