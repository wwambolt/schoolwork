// RefinedAbstraction module component

#include <iostream>
#include "CustomerView.h"
#include "Layout.h"
#include "Product.h"

CustomerView::CustomerView(Layout * layout)
{
    // Set member variable equal to given pointer
    chosen_layout_ = layout;
}

void CustomerView::render(void)
{
    // Width given as a percentage
    chosen_layout_->setWidth(40);
    chosen_layout_->setColumns(1);
    chosen_layout_->putHeader();
    // Put as many rows as there are products to display
    for (int i = 0; i < q_; i++)
    {
        chosen_layout_->putLineStart();
        chosen_layout_->putElement(items_->getName(), 100);
        chosen_layout_->putLineEnd();
        items_++;
    }
    chosen_layout_->putFooter();
}

void CustomerView::add(Product * products, int quantity)
{
    q_ = quantity;
    items_ = products;
}
