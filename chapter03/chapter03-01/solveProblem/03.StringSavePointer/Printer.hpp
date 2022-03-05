#ifndef __PRINTER_H__
#define __PRINTER_H__

#include <iostream>

using namespace std;

class Printer{
    private:
        char str[30];
    public:
        void SetString(char *s);
        void ShowString();

};

#endif