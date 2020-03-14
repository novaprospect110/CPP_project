//
//  main.cpp
//  Pocu_CPP_6
//
//  Created by Wayne on 10/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>

using namespace std;

int main(void)
{
    class Vector
    {
        int mX;
        int mY;
    };//좋은 코딩 스타일이 아님!!!
    
    //C++의 기본 접근권한은 private(not public!)
    
    //접근 제어자(Access Modifier)
    //public    : 누구나 접근 가능
    //protected : 자식 class(상속)에서만 접근 가능
    //private   : 해당 class에서만 접근 가능(개체:object에서가 아님!
    
    class SomeClass //보통 제어자(Modifier) 별로 C++멤버들을 그룹 짓는다!
    {
    public:
        int PublicMember;
    protected:
        int mProtectedMember;
    private:
        int mPrivateMember1;
        int mPrivateMember2;
    };
    
    return 0;
}
