//
//  main.cpp
//  Pocu_CPP_1to4_Re
//
//  Created by Wayne on 06/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>
#include <cstring>   //c언어에서의 <string.h>
#include <cstdio>    //c언어에서의 <stdio.h>
#include <cctype>    //c언어에서의 <ctype.h>
#include <iomanip>   //setw()를 사용하기 위해서 필요
#define macro        //LLONG_MAX를 사용하기 위해서 필요

using namespace std;

void reference_function(int& ra, int& rb);
void pointer_function(int* pa, int* pb);
void console_input_function(void);
void string_function(void);

int main(void)
{
    /*int형 함수의 console 출력(cout)*/
    int integer_1 = 10;
    int integer_2 = -10;
    
    cout << showbase << hex << integer_1 << endl;    // 0xa
    cout << noshowbase << hex << integer_1 << endl;  // a
    cout << showpos << dec << integer_1 << endl;     // +10
    cout << noshowpos << dec << integer_1 << endl;   // 10
    cout << uppercase << hex << integer_1 << endl;   // A
    cout << nouppercase << hex << integer_1 << endl; // a
    
    cout << showbase << hex << integer_2 << endl;    // 0xfffffff6
    cout << noshowbase << hex << integer_2 << endl;  // fffffff6
    cout << showpos << dec << integer_2 << endl;     // -10
    cout << noshowpos << dec << integer_2 << endl;   // -10
    cout << uppercase << hex << integer_2 << endl;   // FFFFFFF6
    cout << nouppercase << hex << integer_2 << endl; // fffffff6
    
    //출력시 cout << ~~~ << hex(16)/dec(10)/oct(8) << --- << endl;의 꼴
    //showbase    : 16진법으로 출력하되, 16진법으로 나타내었음을 함께 출력
    //noshowbase  : 16진법으로 출력
    //showpos     : 양수면(10진수만) +도 함께 출력
    //noshowpos   : 음수면(10진수만) -도 함께 출력
    //uppercase   : 모두 대문자로(16진수만) 출력
    //nouppercase : 모두 소문자로(16진수만) 출력
    
    
    printf("\n");
    
    
    /*float형 함수의 console 출력(cout)*/
    float float_1 = 10.0;
    float float_2 = 10.123;
    
    cout << showpoint << float_1 << endl;   // 10.0000
    cout << noshowpoint << float_1 << endl; // 10
    cout << fixed << float_1 << endl;       // 10.000000
    cout << scientific << float_1 << endl;  // 1.000000e+01
    
    cout << showpoint << float_2 << endl;   // 1.012300e+01
    cout << noshowpoint << float_2 << endl; // 1.012300e+01
    cout << fixed << float_2 << endl;       // 10.123000
    cout << scientific << float_2 << endl;  // 1.012300e+01
    
    //출력시 cout << ~~~ << --- << endl;의 꼴(중간에 hex나 dec등은 쓰지 않는다.)
    //showpoint   : 소수점을 함께 출력(가장 일반적인 모습)
    //noshowpoint : 소수점이 필요한 경우만 출력
    //fixed       : 수학적으로 출력(10.123)
    //scientific  : 과학적으로 출력(1.0123*10)
    
    
    printf("\n");
    
    
    /*정렬 후 console 출력(cout)*/
    int val_1 = -123;
    string val_2 = "-H i!";
    const int val_3 = -123;
    
    cout << setw(6) << left << dec << val_1 << endl; //-123
    cout << setw(6) << right << val_1 << endl;       //  -123
    cout << setw(6) << internal << val_1 << endl;    //-  123
    
    cout << setw(6) << left << val_2 << endl;        //-H i!
    cout << setw(6) << right << val_2 << endl;       // -H i!
    cout << setw(6) << internal << val_2 << endl;    // -H i!
    
    cout << setw(6) << left << val_3 << endl;        //-123
    cout << setw(6) << right << val_3 << endl;       //  -123
    cout << setw(6) << internal << val_3 << endl;    //-  123
    
    //변수형이 수형인 경우(int , float , double...)
    //참고: 상수(const)도 해당됨.
    //출력시 cout << set(n) << ~~~ << dec(처음만) << --- << endl;
    //순서가 바뀔 시 제대로 출력 안 되는 경우가 있음.- 문자형도 마찬가지
    //setw(n)    : 정렬해서 출력할 수의 공간(칸) 수를 지정
    //left       : n칸 내에서 좌측 정렬 후 출력
    //right      : n칸 내에서 우측 정렬 후 출력
    //internal   : n칸 내에서 부호는 좌측 정렬, 수는 우측 정렬 후 출력
    
    //변수형이 문자형인 경우(char , string)
    //출력시 cout << set(n) << ~~~ << --- << endl;
    //setw(n)    : 정렬해서 출력할 문자의 공간(칸) 수를 지정
    //left       : n칸 내에서 좌측 정렬 후 출력
    //right      : n칸 내에서 우측 정렬 후 출력
    //internal   : (문자형의 경우 right와 동일)
    
    
    printf("\n");
    
    
    /*Bool형(True/False)*/
    bool bool_val1 = true;  //true  : 0이 아닌 모든 값
    bool bool_val2 = false; //false : 0
    if((bool_val1 == true)||(bool_val2 != false))//bool타입을 이용한 if문
    {
        //...
    }
        
    /*참조(Reference)*/
    int& ra = integer_1;  //integer_1 = 10
    int& rb = integer_2;  //integer_2 = -10
    int* pa = &integer_1;
    int* pb = &integer_2;
    
    cout << ra << " " << rb << endl;
    
    //참조는 무조건 선언할 때, 값을 바로 지정 해주어야 함.
    //예)int& ra; ra = integer; 시 ERROR
    //포인터와 참조의 위치가 매우 비슷함. 단, 포인터는 주소, 참조는 원본 값을 들고 옴.
    //참조를 다른 값으로 지정하면 안 됨.(원본의 값도 함께 바뀜.)
    //예)ra = integer_2; (ra = -10 , integer_1 = -10 , integer_2 = -10)
    //이유는 컴퓨터가 참조를 인식하지 못하기 때문에 동일한 것으로 취급함.(C에는 없음)
    

    reference_function(ra,rb);//참조를 끌고 가는 함수
    cout << integer_1 << " " << integer_2 << endl;
    pointer_function(pa,pb);//포인터를 끌고 가는 함수
    cout << integer_1 << " " << integer_2 << endl;
    
    
    printf("\n");

    /*Console 입력, 문자형(String)*/
    console_input_function(); //Console 입력
    string_function();        //문자열(String)
    
    return 0;
}

void reference_function(int& ra, int& rb)// 참조를 통한 Swap함수
{
    int temp = ra;
    ra = rb;
    rb = temp;
}
//int& 대신 int형을 쓰면 Call by Value가 되어버린다.(main함수에서 값의 변경X)

void pointer_function(int* pa, int* pb)// 포인터를 통한 Swap함수
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void console_input_function()// Console 입력
{
    int input_1;
    cin >> input_1;
    cin.clear();                //들어온 stream을 삭제(지움)
    cin.ignore();               //들어온 stream에서 맨 앞 1문자를 버리고 멈춤
    cin.ignore(5,'\n');         //들어온 stream에서 맨 앞 5문자를 버리되, 도중에 newline 등장시에는 멈춤
    cin.ignore(LLONG_MAX,'\n'); //들어온 stream에서 최대 문자(LLONG_MAX)수 만큼 버리되, 도중에 newline 등장시에는 멈춤
    
    //cin.clear()        : 들어온 stream을 삭제(단, 작동은 한 것으로 남아있음)
    //cin.ignore(n)      : stream에서 맨 앞에서부터 n개의 문자를 버리고 멈춤
    //cin.ignore(n,'\n') : stream에서 맨 앞에서부터 n개의 문자를 버리되, 중간에 newline이 있을 시에는 즉시 멈춤
    //cin.eof()          : 들어온 stream의 마지막(end-of-file)인지 확인
    //cin.fail()         : 들어온 stream에 오류(Error)가 있는지 확인
    
    int input_2 = 0;
    while(true)
    {
        cin >> input_2;
        if(cin.fail())//숫자말고 다른 게 들어오거나 입력에 오류가 생기는 경우
        {
            cout << "Invalid input" << endl;
            cin.clear();
            cin.ignore(100,'\n');
            continue;//재입력을 하게끔 처음으로 돌아감
        }
        if(cin.eof())//입력값이 더 이상 남지 않은 경우(EOF)
        {
            break;
        }
    }
    cin.clear();
    cout << 2*input_2 << endl;
}//완벽한 코드가 아니라서 while문 안에서 무한반복됨. 고쳐야 함.

void string_function()// 문자열
{
    char str1[256];
}
