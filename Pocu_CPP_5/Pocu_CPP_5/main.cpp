//
//  main.cpp
//  Pocu_CPP_5
//
//  Created by Wayne on 07/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    ifstream fin;//읽기전용으로 파일오픈
    fin.open("helloWorld.txt");
    
    ofstream fout;//쓰기전용으로 파일오픈(파일이 없으면 생성)
    fout.open("helloWorld.txt");
    
    fstream fs;//읽기와 쓰기 범용으로 파일을 오픈
    fs.open("helloWorld.txt");
    
    fin.open("helloWorld.txt", ios_base::in | ios_base::binary);
    //ios_base:모드 플래그의 namespace
    //in     - 입력
    //out    - 출력
    //ate    -(at-the-end) 파일의 제일 마지막 pointer로 옮겨라(거기서 부터 작성하겠다!)
    //app    - append(덧붙이기)
    //trunc  - truncation(읽은 후 소거)
    //binary - 2진
    
    fin.close();//fin의 scope를 벗어나면 알아서 닫아주긴 함(정상적으로 파일이 끝나는 경우를 의미함)
    
    if(fin.is_open())//stream 상태 확인하기(파일이 열려 있는지 확인)
    {
        cout << "file(fin) is opened" << endl;
    }
    
    if(fs.is_open())//stream 상태 확인하기(파일이 열려 있는지 확인)
    {
        cout << "file(fs) is opened" << endl;
    }
    fs.close();

    return 0;
}
