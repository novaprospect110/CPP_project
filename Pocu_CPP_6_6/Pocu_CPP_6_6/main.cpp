//
//  main.cpp
//  Pocu_CPP_6_6
//
//  Created by Wayne on 12/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>

//생성자는 멤버 초기화를 위해 있는 것!(기본생성자/default생성자는 이미 class내부에 들어있는 것으로 생략가능)
//생성자 오버로딩(Overloading) : 매개 변수를 달리하는 생성자를 여러개 생성하는 것
//소멸자(Destructor)   ---> C++ class에서는 그 안에서 메모리를 동적으로 할당할 수 있어서 그런 경우에는 메모리를 직접 해제해야 한다.

class Vector
{
public:
    ~Vector();       // ~표시 : 소멸자(Destructor) --->오버로딩X(자동으로 호출)
private:
    int mX;
    int mY;
};

Vector::~Vector()    //.cpp파일에서의 소멸자 사용방법
{
    
}


int main(void);
