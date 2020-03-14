//
//  main.cpp
//  Pocu_CPP
//
//  Created by Wayne on 04/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

//#pragma once
#include <iostream>
#include <iomanip>
using namespace std;//namespace는 이름충돌을 막기 위함이다.

namespace hello
{
void SayHello();//hello라는 namespace에 속해 있다.
}

namespace  hi
{
void SayHello();//hi라는 namespace에 속해 있다.
}

int main(void)
{
    std::cout << "Hello, world!" << std::endl;
    
    int integer = 10;
    float decimal = 1.5f;
    char letter = 'A';
    char string[] = "Hello, world!";
    
    cout << integer << endl;
    cout << decimal << endl;
    cout << letter << endl
        << string << endl;//이렇게 쓰는 경우는 줄을 한 줄 바꿔서 쓰자.
    
    int number = 10;
    cout << showbase << hex << number << endl;//number를 showbase -> hex로 보이되, 몇 진법인지 표기해라!
    cout << noshowbase << hex << number << endl;//number를 noshowbase -> hex로 보이되, 몇 진법인지 표기하지 마라!
    cout << showpos << dec << number << endl;//number를 showpos (양수면 +를 붙여라! // hex:16진수 , dec:10진수 , oct:8진수)
    cout << noshowpos << number << endl;//number를 noshowpos (음수면 -를 붙여라!)
    
    cout << uppercase << hex << number << endl;//number를 uppercase -> hex로 대문자로 보여줘라!
    cout << nouppercase << hex << number << endl;//number를 nouppercase -> hex로 소문자로 보여줘라!
    
    number = -123;
    cout << setw(6) << left << dec << number << endl;//좌측에 붙여서 써라!
    cout << setw(6) << internal << number << endl;//부호만 좌측, 크기값은 우측에 붙여서 써라!
    cout << setw(6) << right << number << endl;//우측에 붙여서 써라!
    
    float decimal1 = 100.0;
    float decimal2 = 100.12;
    cout << noshowpoint << decimal1 << " " << decimal2 << endl;//소수점이 필요없다면 빼라!
    cout << showpoint << decimal1 << " " << decimal2 << endl;//소수점은 꼭 써라!
    
    float decimal3 = 123.456789;
    cout << fixed << decimal3 << endl;//일반적인 방법으로 나타내라!
    cout << scientific << decimal3 << endl;//과학적인 방법으로 나타내라!
    
    int bReady = true;
    cout << boolalpha << bReady << endl;//원래는 true 혹은 false로 나타냄.
    cout << noboolalpha << bReady << endl;//1 혹은 0으로 나타내라!
    
    number = 123;
    cout << setw(5) << number << endl;//number를 5칸의 공간에 넣어라! 단, 뒤에서부터 채움.
    cout << setfill('*') << setw(5) << number << endl;//number에서 남는 공간에는 *로 채워라!
    
    cout << fixed << setprecision(7) << decimal3 << endl;//setprecision(7):소수점 아래 7개까지만 나타내라!
    
    int firstColumnLength = 20;
    int secondColumnLength = 10;
    int Americano = 4.2f;
    int Latte = 5.6f;
    int HoneyBread = 10.8f;
    cout << setfill('-') << setw(firstColumnLength + secondColumnLength) << " " << endl << setfill(' ');
    cout << setw(firstColumnLength) << "Name"
        << setw(secondColumnLength) << "Price" << endl;
    cout << setw(firstColumnLength) << "Americano" << setw(secondColumnLength-1) << right << "$" << Americano << endl;
    cout << setw(firstColumnLength) << "Latte" << setw(secondColumnLength-1) << right << "$" << Latte << endl;
    cout << setw(firstColumnLength) << "HoneyBread" << setw(secondColumnLength-2) << right << "$" << HoneyBread << endl;
    
    /////* 참고 *//
    //cout << showpos << number; 은 cout.setf(ios_base::showpos); cout << number; 와 같은 표현이다.(cout member method)
    //cout << setw(5) << number; 은 cout.width(5); cout << number; 와 같은 표현이다.
    
    return 0;
}

