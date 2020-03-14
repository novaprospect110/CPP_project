//
//  main.cpp
//  Pocu_CPP_6_7
//
//  Created by Wayne on 13/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>

//const : 바꿀 수 없는 것을 말함.

class Vector
{
public:

    //const 변수 (상수?)
    const int LINE_SIZE = 20; //상수는 대문자로 쓰는 게 국룰!
    
    //const method, 해당 개체 안의 어떠한 것도 변경X
    int GetX() const;         //함수 내부 변경 불가(멤버 변수 변경 금지!)
    int GetY() const;         //ex) f(x):y = x ---> f(x):y = 2x (불가!), 물론 입력값이나 출력값은 달라질 수 있음!
    void SetX(int x);         //값을 변화시키기 위해서 const 제외!
    void SetY(int y);
    
    void Add(const Vector& other);
private:
    int mX;
    int mY;
};

int main(void)
{
    return 0;
}




int Vector::GetX() const      //mX값 반환
{
    return mX;
}

int Vector::GetY() const      //mY값 반환
{
    return mY;
}

void Vector::SetX(int x)      //mX값 변경
{
    mX = x;
}
void Vector::SetY(int y)      //mY값 변경
{
    mY = y;
}

void Vector::Add(const Vector& Vector)
{
    mX += Vector.mX;
    mY += Vector.mY;
}

//void AddConst(const Vector& other) const
//{
//    mX = mX + other.mX;
//    mY = mY + other.mY;
//}                           //잘못된 함수 변경

//struct = class(단, default: struct-public / class-private)
//단, struct는 순수하게 데이터 뿐이어야 함.(구조체는 C스타일대로, 클래스는 C++스타일대로!)
//struct는 사용자가 선언한 생성자/소멸자X
//static이 아닌 private/protected 멤버 변수X(모두 public으로!)
//가상 함수X
//메모리 카피O (memcpy()를 사용해 struct를 char[]로 혹은 char[]를 struct로 복사할 수 있음.)

struct test1
{
    int X1;
    int Y1;
};

class test2
{
    int X2;
    int Y2;
};
