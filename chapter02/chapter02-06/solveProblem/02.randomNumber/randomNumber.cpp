#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv) {
    int randomNumber[5] = {'\0',};
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        int random = rand() % 100;
        printf("random number make : %d\r\n", random);
        randomNumber[i] = random;
    }

    return 0;
}