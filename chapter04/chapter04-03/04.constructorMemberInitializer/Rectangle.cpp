#include <iostream>
#include "Rectangle.h"

using namespace std;

/** 객체가 생성되는 과정 
 * 1. 메모리 공간의 할당
 * 2. 이니셜라이져를 이용한 멤버변수(객체)의 초기화
 * 3. 생성자의 몸체부분 실행
 * 
 * 초기화의 대상을 명확히 이식할 수 있다. 성능상의 약간의 이점이 있다.
 * 이니셜라이져를 이용하면, 선언과 동시에 초기화가 이뤄지는 형태로 바이너리 코드가 생성된다. 따라서 const 키워드의 멤버 변수를 이니셜 라이져를 사용을 하면, 초기화가 가능하다.
 */
/** member initializer */
Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2):upLeft(x1, y1), lowRight(x2, y2){
// empty
}

void Rectangle::ShowRectInfo() const{
    cout<<"left up "<<'['<<upLeft.GetX()<<", "<<upLeft.GetY()<<']'<<endl;
    cout<<"right bottom "<<'['<<lowRight.GetX()<<", "<<lowRight.GetY()<<']'<<endl;
}