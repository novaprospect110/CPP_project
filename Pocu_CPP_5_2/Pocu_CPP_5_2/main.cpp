//
//  main.cpp
//  Pocu_CPP_5_2
//
//  Created by Wayne on 09/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    ifstream fin;
    fin.open("Hello World.txt");//파일내용 : Hello,
                                //        I love C++.
                                //        C++ is the best computer language.

    string line;
    while (!fin.eof())//txt파일에 남아있는 문자(char)가 없을 때까지 작동
    {
        getline(fin, line);//해당 파일에서의 한 줄(a line)을 복사
        cout << line << endl;
    }
    fin.close();
    
    
    
    ofstream fout;
    fout.open("titless.txt");//파일 생성

    
    
    ifstream fin2;
    fin2.open("titless.txt");//아무 내용도 없는 빈 txt 파일
    
    string line2;
    while (!fin2.eof())
    {
        getline(fin2, line2);
        cout << line2 << endl;
    }
    fin2.close();//빈 txt 파일임에도 불구하고, 비어있는 한 줄이 출력된다.
    
    
    
    //ofstream fout2;
    //fout2.open("character.txt");//파일 생성
    
    ifstream fin3;
    fin3.open("character.txt");//파일내용 : Hello, World!
    
    string char_1;
    int printer;
    while (!fin3.eof())
    {
        fin3 >> char_1 >> printer;
        cout << char_1 << " " << printer << endl;
    }
    
    fin3.close();
    
    
    
    //문자열 하나와 숫자 하나를 읽는 경우
    
    ifstream fin4;
    fin4.open("a_string_and_a_number.txt");//파일내용 : Warhammer 40000
    
    int number_4;
    string string_4;
    
    while (!fin4.eof())
    {
        fin4 >> string_4 >> number_4;
        cout << string_4 << " : " << number_4 << endl;
    }
    
    return 0;
}
