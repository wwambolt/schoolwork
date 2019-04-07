// Concrete Implementor module component

#ifndef WEB_H
#define WEB_H

#include "Layout.h"
#include <string>
using namespace std;

class WebLayout : public Layout
{
    public:
        WebLayout(){};
        void setWidth(int w);
        void setColumns(int n);
        void putHeader(void) const;
        void putLineStart() const;
        void putElement(const string& e, int w) const;
        void putElement(int n, int w) const;
        void putLineEnd(void) const;
        void putFooter(void) const;
    protected:
        int width;
        int columns;
};
#endif