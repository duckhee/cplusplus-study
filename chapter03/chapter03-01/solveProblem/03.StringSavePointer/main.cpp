#include "Printer.hpp"

int main(int argc, char **argv){
    Printer pnt;
    pnt.SetString("Hello World !");
    pnt.ShowString();
    pnt.SetString("I love C++");
    pnt.ShowString();
    return 0;
}