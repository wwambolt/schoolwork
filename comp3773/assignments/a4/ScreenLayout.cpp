// Concrete Implementor module component

#include <iostream>
#include <iomanip>
#include "ScreenLayout.h"
#include <cstring>
using namespace std;

void
ScreenLayout::setWidth(int w)
{
    width = w;
}

void
ScreenLayout::setColumns(int n)
{
    columns = n;
}

void
ScreenLayout::putHeader(void) const
{
    cout << "+";
    for (int i = 0; i < (width*60/100 - 2); i++)
        cout << "-";
    cout << "+" << endl;
}

void
ScreenLayout::putElement(const string &e, int w) const
{
    int space_lost = 4 + ((columns - 1) * std::strlen(" | "));
    int calculated_width = (width*60/100 - space_lost)*w/100;
    cout << left << setw(calculated_width) << e;
    cout << " | ";
}

void
ScreenLayout::putElement(int n, int w) const
{
    int space_lost = 4 + ((columns - 1) * std::strlen(" | "));
    int calculated_width = (width*60/100 - space_lost)*w/100;
    cout << right << setw(calculated_width) << n;
    cout << " | ";
}

void
ScreenLayout::putLineStart(void) const
{
    cout << "| ";
}
void
ScreenLayout::putLineEnd(void) const
{
    cout << endl;
}

void
ScreenLayout::putFooter(void) const
{
    cout << "+";
    for (int i = 0; i < (width*60/100 - 2); i++)
        cout << "-";
    cout << "+" << endl;
}