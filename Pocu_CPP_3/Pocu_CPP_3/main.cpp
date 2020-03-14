//
//  main.cpp
//  Pocu_CPP_3
//
//  Created by Wayne on 05/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>
using namespace std;
void Swap(int& n1, int& n2);

int main(void)
{
    bool IsStudent = true;//bool - true/false
    if(IsStudent == false)
    {
        //...
    }
    if(IsStudent == true)
    {
        //...
    }
    
    int number = 100;
    int& reference = number;//int& reference; reference = number;와 같은 방법으로 쓸시 compile error(초기화 중에 선언되어야 한다!)
    cout << reference << endl;//reference : 참조(별칭이나 별명같은 거) --> NULL로는 선언 불가!
    
    int number1 = 100;
    int number2 = 200;
    int& ref_num1 = number1;
    ref_num1 = number2;
    cout << number1 << " " << number2 << " " << ref_num1 << endl;//참조는 변경불가! 참조를 바꾸면 원본의 값도 함께 변경되어 버린다!
    
    int number3 = 10;
    int number4 = 20;
    int& n3 = number3;
    int& n4 = number4;
    Swap(n3,n4);
    
    return 0;
}

void Swap(int& n1 ,int& n2)//소유하지 않은 메모리 장소는 가리킬 수 없다!(ex) *(number + 1)같은 표현 은 reference로 쓸 수 없다!)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;//포인터처럼 사용가능!!!(단 주소 이동은 불가!)
}

//컴퓨터는 reference를 인지할 수 없다!(오직 사람을 위한 도구)
