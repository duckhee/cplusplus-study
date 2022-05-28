#include <iostream>

using namespace std;

void Counter(){
    // 함수가 종료가 되어도 다시 할당이 되지 않는다.
    // bss 영역에 올라가서 프로그램이 종료가 될때까지 소멸되지 않는다.
    static int cnt;
    cnt++;
    cout<<"Current cont : "<<cnt<<endl;
}

int main(){
    for(int i = 0; i < 10; i++){
        Counter();
    }
    
    return 0;
}