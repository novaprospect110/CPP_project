//
//  main.cpp
//  Pocu_CPP_6_5
//
//  Created by Wayne on 10/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Vector
{
public:
    Vector()
        //mX = 0;//초기화가 아니다! 이건 대입이다!
        //mY = 0;
        : mX(0)//C++에서의 초기화 리스트(Initializer List)
        , mY(0)//const(상수)에도 가능(단, 상수는 초기화만 가능! 대입불가!)
    {
    }
private:
    int mX;
    int mY;
};

class Vector2//생성자 오버로딩(Constructor Overloading)
{
public:
    Vector2(int x, int y)
    : mX(x)
    , mY(y)
    {
        Vector2 a(1,3);//a(1이 x에, 3이 y에 대응)
    }
private:
    int mX;
    int mY;

};

int main(void)
{
    return 0;
}
