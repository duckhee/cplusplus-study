#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char **argv) {
    char str[50] = "standardFunction call";
    char strCopy[50];
    cout << "raw function : " << str << endl;
    int length = strlen(str);
    cout << "length : " << length << endl;
//    realloc(str, sizeof(50)*sizeof(char));
    strcat(str, " test");
    cout << "concat : " << str << endl;
    strcpy(strCopy, str);
    cout << "copy : " << strCopy << endl;
    int flag = strcmp(str, strCopy);
    cout << "flag : " << flag << endl;

    return 0;
}