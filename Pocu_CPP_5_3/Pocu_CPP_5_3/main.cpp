//
//  main.cpp
//  Pocu_CPP_5_3
//
//  Created by Wayne on 09/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>
#include <fstream>
#define macro

using namespace std;

int main(void)
{
//    ofstream of1;
//    of1.open("only_numbers.txt");
    
    //숫자만 있는 파일 읽기
    ifstream if1;
    if1.open("only_numbers.txt");          //파일 내용 : 100 200 300
    
    int number1;
    
    while (!if1.eof())
    {
        if1 >> number1;
        if(!if1.fail())
        {
            cout << number1 << endl;
        }
    }
    if1.close();
    
    
    
//    ofstream of2;
//    of2.open("number_with_string.txt");
    
    //숫자와 문자열이 섞여있는 파일에서 숫자만 출력하기
    ifstream if2;
    if2.open("number_with_string.txt");    //파일 내용 : 100 C++ 300
    
    int number2;
    
    while(!if2.eof())
    {
        if2 >> number2;
        if(if2.fail())
        {
            if2.clear();
            if2.ignore(LLONG_MAX,' ');
        }
        else
        {
            cout << number2 << endl;
        }
    }
    
    
    
//    ofstream of3;
//    of3.open("tab_and_space.txt");
    
    //숫자와 문자열, space와 \t 모두 있는 파일에서 숫자만 출력하기
    ifstream if3;
    if3.open("tab_and_space.txt");        //파일 내용 : 100 C++ \t 300
    int number3;
    string trash;
    
    while (true)
    {
        if3 >> number3;
        if(!if3.fail())
        {
            cout << number3 << endl;
            continue;
        }
        if(if3.eof())
        {
            break;
        }
        if3.clear();
        if3 >> trash;//잘 못 들어온 문자열은 읽기만 하고 사용하지 않은 체 넘긴다.
                     //clear()와 >> trash의 순서를 바꾸면 무한루프에 빠져버린다!(순서 중요!)
    }
    
    
    return 0;
}
