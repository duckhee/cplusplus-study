#include <iostream>

using namespace std;

void swap(int *num1, int *num2){
    int temp = 0;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void swap(char *ch1, char *ch2){
    char temp;
    temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

void swap(double *dbl1, double *dbl2){
    double temp = *dbl1;
    
    *dbl1 = *dbl2;
    *dbl1 = temp;
}


int main(int argc, char **argv){
    int num1 = 20, num2 = 30;
    cout<<"swap before : "<<num1<<' '<<num2<<endl;
    swap(&num1, &num2);
    cout<<"swap after : "<<num1<<' '<<num2<<endl;

    char ch1 = 'A', ch2 = 'Z';
    cout<<"swap before : "<<ch1<<' '<<ch2<<endl;
    swap(&ch1, &ch2);
    cout<<"swap after : "<<ch1<<' '<<ch2<<endl;

    double dbl1 = 1.111, dbl2 = 5.555;
    cout<<"swap before : "<<dbl1<<' '<<dbl2<<endl;
    swap(&dbl1, &dbl2);
    cout<<"swap after : "<<dbl1<<' '<<dbl2<<endl;
    return 0;
}