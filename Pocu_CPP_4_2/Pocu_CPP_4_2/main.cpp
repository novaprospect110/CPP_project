//
//  main.cpp
//  Pocu_CPP_4_2
//
//  Created by Wayne on 05/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>
#include <sstream>//istringstream 이나 ostringstream 을 쓰려면 필요한 헤더파일
#include <string> //c에서의 <string.h>
#include <cstdio> //c에서의 <stdio.h>
#include <cctype> //c에서의 <ctype.h>

int main(void)
{
    std::string test_str1 = "123 123 456 7890";
    std::istringstream iss (test_str1);//istringstream은 cin과 달리 string에서 입력(cin은 키보드에서 입력) --- sscanf()와 비슷
    
    for(int i = 0 ; i < 5 ; i ++)
    {
        int val;
        iss >> val;//iss라는 문자열을 val에서 수열로 받음.
        std::cout << val*2 << '\n';//val * 2 가 된 수열을 출력.
    }
    
    std::ostringstream oss (test_str1);//ostringstream은 cout과 달리 string에 출력(cout은 콘솔에서 출력) ---sprintf()와 비슷
    //ostringstream은 제대로 이해하지 못했음. 나중에 다시 한 번 살펴볼 필요가 있음.

    std::string line = "POCU";
    const char* cLine = line.c_str();//메모리 저장 시 컴퓨터가 임의로 데이터 용량(길이)을 바꾸는 것을 막기 위해 const를 사용한다!

    return 0;
}

using namespace std;

namespace samples
{
    void MirrorStringExample()
    {
        cout << "+-----------------------+" << endl;
        cout << "| Mirror String Example |" << endl;
        cout << "+-----------------------+" << endl;
        
        string line = "Hello, world!";
        
        cout <<"string to mirror: " << line << endl;
        
        for(int i  = (int)line.size() - 1 ; i > -1 ; --i)//뒤에서부터 훑기
        {
            line += line[i];//Appending
        }
        cout << "mirrored string: " << line << endl;
    }
}
