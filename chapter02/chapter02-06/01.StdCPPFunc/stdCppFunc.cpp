#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(int argc, char **argv) {
    char str1[] = "Result";
    char str2[30];

    strcpy(str2, str1);
    printf("%s : %f \r\n", str1, sin(0.14));
    printf("%s : %f \r\n", str2, abs(-1.25));
    return 0;
}