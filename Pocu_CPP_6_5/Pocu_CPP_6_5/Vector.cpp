//
//  Vector.cpp
//  Pocu_CPP_6_5
//
//  Created by Wayne on 10/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>
#include "Vector.hpp"

Vector::Vector()//cpp 파일에서 Vector class만들기
: mX(0)
, mY(0)
{
}

Vector::Vector(int x, int y)
: mX(x)
, mY(y)
{
}
