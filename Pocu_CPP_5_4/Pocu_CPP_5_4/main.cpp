//
//  main.cpp
//  Pocu_CPP_5_4
//
//  Created by Wayne on 09/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;


int main(void)
{
    //파일 안에 쓰기
    ofstream fout1;
    fout1.open("write_down.txt");
    
    ifstream fin1;
    fin1.open("write_down.txt");
    
    string line1;
    getline(cin, line1);
    if(!cin.fail())
    {
        fout1 << line1 << endl;
        fout1.put('b');              // 파일 끝에 붙여서 쓴다!
    }
    fout1.close();
    
    //binary 파일 읽기
    ifstream fin2("testfile.dat",ios_base::in | ios_base::binary);
//    if(fin2.is_open())
//    {
//        Record record;                           //structure
//        fin2.read((char*)&record,sizeof(Record));
//    }
    fin2.close();
////완벽하지 않아서 일단은 주석처리함.
    
    //binary 파일 쓰기
    ofstream fout2("testfile.dat",ios_base::out | ios_base::binary);
    if(fout2.is_open())
    {
        char buffer[20] = "Novaprospect 110";
        fout2.write(buffer,20);
        fout2.seekp(0);                    //처음 위치로 이동 ---> seekp(0)
        fout2.seekp(20, ios_base::cur);    //현재 위치로부터 20바이트 뒤로 이동
        ios::pos_type pos1 = fout2.tellp();//쓰기 포인터의 위치를 구함
        ios::pos_type pos2 = fin2.tellg(); //읽기 포인터의 위치를 구함
    }
    fout2.close();
    
    //binary 파일 탐색
    fstream fs2("testfile.dat",ios_base::in | ios_base::out | ios_base::binary);
    
    if(fs2.is_open())
    {
        fs2.seekp(20,ios_base::beg);//seekp : 탐색
        if(!fs2.fail())
        {
        }
    }
    fs2.close();
    
    return 0;
}
