#include <iostream>

int main(int argc, char **argv){
    int num1, num2, num3, num4, num5;
    int result = 0;
    std::cout<<"first integer number input : ";
    std::cin>>num1;
    std::cout<<"second integer number input : ";
    std::cin>>num2;
    std::cout<<"third integer number input : ";
    std::cin>>num3;
    std::cout<<"fourth integer number input : ";
    std::cin>>num4;
    std::cout<<"fifth integer number input : ";
    std::cin>>num5;
    result = num1 + num2 + num3 + num4 + num5;
    std::cout<<"result number : "<<result;
    return 0;
}