#include <iostream>
#include <cstring>

using namespace std;

// Girl class name
class Girl;

class Boy{
    private:
        int height;
        friend class Girl; // Girl class friend setting Girl class에서 Boy class 접근 가능하게 설정 해주는 것
    public:
        Boy(int len):height(len){

        }
        void ShowYourFriendInfo(Girl &frn);
};

class Girl{
    private:
        char phNum[20];
    public:
        Girl(char *name){
            strcpy(phNum, name);
        }
        void ShowYourFriendInfo(Boy &frn);
        friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl &frn){
    cout<<"Boy Call Friend"<<endl;
    cout<<"Her phone number : "<<frn.phNum<<endl;
}

void Girl::ShowYourFriendInfo(Boy &frn){
    cout<<"Girl Call Friend"<<endl;
    cout<<"His Height : "<<frn.height<<endl;
}

int main(){
    Boy boy(170);
    Girl girl("010-1234-5678");
    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);
    return 0;
}