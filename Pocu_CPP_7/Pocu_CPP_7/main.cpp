//
//  main.cpp
//  Pocu_CPP_7
//
//  Created by Wayne on 13/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>

//복사 생성자 : 같은 class에 속해있는 다른 개체(object)를 이용하여 새로운 개체를 초기화(단, 같은 크기, 같은 데이터)

using namespace std;

class Vector
{
public:
    Vector(const Vector& other);
private:
    int mX;
    int mY;
};

//복사 생성자 문법(?) : <class_name>(const <class_name>&);   ex) Vector(const Vector& other);
//Vector a;     //매개변수 없는 생성자 호출
//Vector b(a);  //복사 생성자를 호출

Vector::Vector(const Vector& other)
:mX(other.mX)   //other는 mX와 mY와 같은 class에 있기 때문에 private member에 접근 할 수 있다!
,mY(other.mY)
{
}

//암시적(implicit) 복사 생성자 - 얕은 복사(Shallow Copy) 실행

int main(void)
{

    return 0;
}
