// Concrete Implementor module component

#include <iostream>
#include <iomanip>
#include "WebLayout.h"
using namespace std;

void
WebLayout::setWidth(int w)
{
    width = w;
}

void
WebLayout::setColumns(int n)
{
    columns = n;
}

void
WebLayout::putHeader(void) const
{
    cout << "<table border width=" << width << "%>" << endl;
}

void
WebLayout::putElement(const string &e, int w) const
{
    cout << "  <td width=" << w << "%>" << e << "</td>" << endl;
}

void
WebLayout::putElement(int n, int w) const
{
    cout << "  <td width=" << w << "%>" << n << "</td>" << endl;
}

void
WebLayout::putLineStart(void) const
{
    cout << " <tr>" << endl;
}
void
WebLayout::putLineEnd(void) const
{
    cout << " </tr>" << endl;
}

void
WebLayout::putFooter(void) const
{
    cout << "</table>" << endl;
}