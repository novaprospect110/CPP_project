//
//  main.cpp
//  Pocu_CPP_4
//
//  Created by Wayne on 05/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void)
{
    char line[256];//이 코드가 문제가 생기는 경우!!! 1.256자리 이상 사용시(버퍼가 너무 작을 때) 2. 아무것도 읽지 못할 시
    cin.getline(line,256);
    cout << line << endl;
    
    string line_0; // std::string line_0 와 같다
    cin >> line_0; // std::cin >> line_0 와 같다
    
    string line1 = "Hello, ";
    string line2 = "world!";
    string line3 = line1;//string으로 대입(Assignment)
    line3 += line2;//string으로 덧붙이기(Appending)
    cout << line3 << endl;
    
    string line4 = line1 + line2;//string 합치기(Concatenation)
    cout << line4 << endl;
    
    string first_line = "asdf";
    string second_line = "asdf";
    string third_line = "axcv";
    if(first_line == second_line)//같은 문자열인지 확인한다!
    {
        cout << "First line and second line are same." << endl;
    }
    if(first_line > third_line)//사전순으로 계산한다!
    {
    }//비교(Relational)연산자
    
    cout << first_line.size() << endl;
    cout << first_line.length() << endl;
    
    string line5;
    cin >> line5;
    const char* cLine = line5.c_str();//cLine은 line5의 시작 주소(Initial Address)를 가리키는 포인터를 반환한다!
    cout << cLine << endl;
    
    string test_str = "POCU";
    char letter = test_str[1];
    test_str[2] = 'P';
    cout << letter << endl
    << test_str << endl;
    
    char letter_1 = test_str.at(1);//at()을 이용하여 위와 같은 효과를 가질 수 있다. 참고로 at은 주어진 위치에 있는 문자를 참조로 반환시키는 역할이다.
    test_str.at(2) = 'C';
    cout << letter_1 << endl
    << test_str << endl;//하지만 c언어에서도 유효한 위의 방식에 비해서 이 방법은 잘 쓰이지는 않는다.
    
    string mailbox;
    getline(cin, mailbox);     //'\n'을 만날 때까지 cin에서 문자들을 꺼내서 mailbox에 저장한다.
    getline(cin, mailbox, '@');//'@'를 만날 때까지 cin에서 문자들을 꺼내서 mailbox에 저장한다.
    //단,EOF(end-of-file)을 만날때나 구분 문자(delimiter : #$%^&*...)를 만날때까지(구분 문자는 버려진다.)
    return 0;
}
