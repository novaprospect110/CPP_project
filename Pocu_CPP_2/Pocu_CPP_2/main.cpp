//
//  main.cpp
//  Pocu_CPP_2
//
//  Created by Wayne on 05/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>
#include <iomanip>
#define macro

using namespace std;

int main(void)
{
    char line;
    cin >> line;
    if(!cin.eof())//eof : end of file - 실행오류를 검사하기 위한 method(파일의 끝인지 아닌지 확인용)
    {
    }

    int number;
    cin >> number;
    //입력값: 456abc -> 456은 숫자이므로 읽고, a에서 동작이 멈춤 : eofbit_unset, failbit_unset(숫자는 읽었으므로)
    //입력값: abc -> 숫자는 없고 시작이 a이므로 처음부터 동작이 멈춤: eofbit_unset, failbit_set
    //입력값: eof -> 숫자는 없고 시작이 eof이므로 동작이 끝나버림  : eofbit_set, failbit_set
    //입력값: 456 -> 숫자만 있고 마지막은 상황에 따라 변함        : eofbit_set or _unset(cin으로 받으면 unset, text파일로 받으면 set, failbit_unset)

    cin.clear();//들어온 스트림을 지워버린다.(->good state)
    cin.ignore();//문자를 버리면 멈춘다.(괄호 안에 들어간 수만큼 버림. ex)cin.ignore(10): 문자 10개를 버림. cin.ignore():문자 1개를 버림.
    cin.ignore(10,'\n');//문자 10개를 버리되, 버리는 도중에 newline(\n)을 만나면 즉시 멈춘다.
    cin.ignore(LLONG_MAX, '\n');//최대 문자 수를 버리되, 버리는 도중에 newline(\n)문자를 버리면 즉시 멈춘다.
    
    char str1[] = "Hello, world!";
    cin.clear();
    cout << str1 << endl;
    
    return 0;
}

namespace samples
{
    void AddIntegersExample()
    {
        cout << "+--------------------------+" << endl;
        cout << "| Add Two Integers Example |" << endl;
        cout << "+--------------------------+" << endl;
        
        int number;
        int sum = 0;
        
        while(true)
        {
            cout << "Please enter an integer or EOF : ";
            cin >> number;
            if(cin.eof())
            {
                break;
            }
            if(cin.fail())
            {
                cout << "Invalid input" << endl;
                cin.clear();
                cin.ignore(LLONG_MAX,'\n');
                continue;
            }
            sum += number;
        }
        cin.clear();
        
        cout << "The sum is " << sum << endl;
    }
}

namespace samples
{
    void ReverseInputStringExample()
    {
        cout << "+------------------------+" << endl;
        cout << "| Reverse String Example |" << endl;
        cout << "+------------------------+" << endl;
        
        const int LINE_SIZE = 512;
        char line[LINE_SIZE];
        
        cout << "Please enter a string to reverse" << endl;
        cout << "or EOF to quit : ";
        
        cin.getline(line, LINE_SIZE);
        if(cin.fail())
        {
            cin.clear();
            return;
        }
        char* a = line;
        char* b = line + strlen(line) - 1;
        do
        {
            char temp = *a;
            *a = *b;
            *b = temp;
            a++;
            b--;
        }
        while(a < b);
        
        cout << "Reversed string : " << line << endl;
    }
}
