//
//  main.cpp
//  Pocu_CPP_6_2
//
//  Created by Wayne on 10/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

//stack&heap

//stack(스택) : 힙보다 빠르다. 최대한 스택을 써라!
//예약된 로컬 메모리 공간을 사용(1MB이하)
//함수 호출/반환이 이 메모리에서 발생
//단순히 스택포이터를 이동시킴
//->메모리 할당/해제 필요X
//->스택에 할당된 메모리는 scope벗어나면 자연 소멸
//->변수와 매개변수를 위해 필요한 공간의 크기는 컴파일 도중 알 수 있음
//단, 너무 큰 개체를 많이 넣으면 성능이 느려지거나 stack overflow발생 가능

//heap(힙)
//전역 메모리 공간을 사용(~GBs)
//비어 있고 연속된 메모리 블록을 찾아야 함
//프로그래머가 메모리를 직접 할당/해제 해야 함 (Ex : clear())
//->메모리 누수 발생

#include <iostream>

using namespace std;

class Vector
{
public:
    int mX;
    int mY;
};

int main(void)
{
    Vector a;                   //stack 메모리에 만들기 --->Java에서는 stack에서 객체(개체)를 생성할 수 없다!
    Vector* b = new Vector();   //heap 메모리에 만들기
    
    return 0;
}

Vector AddVector(const Vector& a, const Vector& b)
{
    Vector result;
    result.mX = a.mX + b.mX;
    result.mY = a.mY + b.mY;

return result;
}

void Foo()
{
    Vector c = AddVector(a, b);
}
