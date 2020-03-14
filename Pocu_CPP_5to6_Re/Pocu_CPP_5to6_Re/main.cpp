//
//  main.cpp
//  Pocu_CPP_5to6_Re
//
//  Created by Wayne on 10/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(void)
{
    /* 파일입출력 */
    ifstream fin;                  //읽기전용
    fin.open("Hello_World!.txt");  //Hello_World!.txt 라는 파일 읽기
    
    string line;                   //읽으려고 하는 파일의 탐색 범위 : string(한 줄)
    while(!fin.eof())              //fin.eof() : 파일 내에서 마지막에 위치함(파일의 끝) ---> 파일을 다 읽을 때까지 반복
    {
        getline(fin,line);         //string 단위로 읽기 -> line
        cout << line << endl;      //string 단위로 console에 출력
    }
    ofstream fout;                 //쓰기전용(파일이 존재하지 않으면 해당 파일을 생성함!)
    fout.open("Hello_World!.txt"); //Hello_World!.txt 라는 파일에 쓰기
    fstream fs;                    //읽고쓰기범용
    fs.open("Hello_World!.txt");   //Hello_World!.txt 라는 파일을 읽고 쓰기
    fs.close();  //Hello_World!.txt 라는 파일을 닫기 -> fout/fin/fs모두 가능
                                   //일반적으로 scope를 벗어나면 자동으로 닫아짐
    if(fs.is_open())               //파일이 열려있는지 확인(if_open())
    {
        cout << "file is open" << endl;
    }
    
    /*binary 파일 입출력*/
    ofstream fout_binary;
    fout_binary.open("Hello_Binary!.dat"); //binary 파일 생성(쓰기)
    ifstream fin_binary;
    fin_binary.open("Hello_Binary!.dat");  //binary 파일 열기(읽기)
    
    fin_binary.open("Hello_Binary!.dat", ios_base::in | ios_base::binary);
    //ios_base:모드 플래그의 namespace
    //in     - 입력
    //out    - 출력
    //ate    -(at-the-end) 파일의 제일 마지막 pointer로 옮겨라(거기서 부터 작성하겠다!)
    //app    - append(덧붙이기)
    //trunc  - truncation(읽은 후 소거)
    //binary - 2진
    
    /*파일 입출력 주의사항*/
    //위의 방법으로 빈파일을 읽으면 비어있는 한 줄이 출력된다
    //문자열과 숫자가 섞여있는 파일의 경우 무한로딩되버린다
    //이 경우에는 string과 int를 둘 다 선언후 같은 방법으로 사용하면 됨
    
    /*문자열과 숫자가 섞여있는 파일읽고 cout하기*/
    ofstream fout2;
    fout2.open("Hello_mixed!.txt");
    ifstream fin2;
    fin2.open("Hello_mixed!.txt");
    int number2;
    string string2;
    
    while(!fin2.eof())
    {
        fin2 >> string2 >> number2;
        cout << string2 << " " << number2 << endl;
    }
    
    
    
    return 0;
}
