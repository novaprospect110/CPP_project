//
//  Vector.hpp
//  Pocu_CPP_6_5
//
//  Created by Wayne on 10/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <stdio.h>

#endif /* Vector_hpp */

class Vector//header 파일에서 Vector class만들기
{
public:        //2개의 생성자(Constructor)
    Vector();  //생성자(Constructor) ---> 기본 생성자(변수를 받지 않음) : 매개변수를 받지 않는다/클래스에 생성자가 없으면 컴파일러가 자동적으로 만든다
    Vector(int x, int y);       // ---> x,y 변수를 받는 생성자
private:
    int mX; //x멤버 변수
    int mY; //y멤버 변수
};
