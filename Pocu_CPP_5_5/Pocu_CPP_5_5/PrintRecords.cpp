//
//  PrintRecords.cpp
//  Pocu_CPP_5_5
//
//  Created by Wayne on 10/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include "PrintRecords.hpp"
#include <fstream>
#include <iomanip>

using namespace std;

namespace samples
{
    Record ReadRecord(istream& stream, bool bPrompt)//stream으로부터 읽어오는 함수
    {
        Record record;//읽어온 결과를 여기에 저장함
    
        if(bPrompt)                         //파일 입력과 키보드 입력 모두 이 함수 사용하기 때문에 이 조건문 사용
        {
            cout << "First name: ";
        }
        stream >> record.FirstName;
    
        if(bPrompt)
        {
            cout << "Last name: ";
            stream >> record.LastName;
        }
    
        if(bPrompt)
        {
            cout << "Student ID: ";
            stream >> record.StudentID;
        }
    
        if(bPrompt)
        {
            cout << "Score: ";
            stream >> record.Score;
        }
    
        return record;         //record 반환
    }

    void DisplayRecords(fstream& fileStream) //파일에 있는 모든 records를 읽어서 콘솔 창에 보여줌
    {
        fileStream.seekg(0); //처음부터 읽음
        
        string line; //한 줄씩 읽겠다!
        while(true)//EOF 만날 시 탈출
        {
            getline(fileStream, line); // 한 줄씩 읽기
            
            if(fileStream.eof())
            {
                fileStream.clear();
                break;
            }
            cout << line << endl;
        }
    }

    void WriteFileRecord(fstream& outputStream, const Record& record) //파일의 마지막에 record를 추가함
    {
    outputStream.seekp(0, ios_base::end); //fileStream의 제일 끝으로 이동
    
    outputStream << record.FirstName << " "
        << record.LastName << " "
        << record.FirstName << " "
        << record.StudentID << " "
        << record.Score << endl;
        
        outputStream.flush(); // 출력 스트림을 flush
    }

    void ManageRecordsExample()  //실제 프로그램 함수
    {
        cout << "+-----------------------------+" << endl;
        cout << "|    Manage Records Example   |" << endl;
        cout << "+-----------------------------+" << endl;
    
        fstream fileStream;
        fileStream.open("StudentRecords.dat",ios_base::in | ios_base::out); // 읽기, 쓰기 모두 실행
        
        bool bExit = false; //사용자가 끝내기를 원할 때까지 반복
        while (!bExit)
        {
            char command = ' ';// command : user에게 1자리 문자를 입력받음(a/d/x)
            
            cout << "a: add" << endl
                << "d:display" << endl
                << "x:exit" << endl;
            
            cin >> command;
            cin.ignore(LLONG_MAX,'\n'); // command : 첫 문자만 받고 나머지는 버림 ex)add --> a
            
            switch (command)
            {
                case 'a': //record를 읽고 파일에 추가
                {
                    Record record = ReadRecord(cin, true);
                    WriteFileRecord(fileStream, record);
                    break;
                }
                case 'd': // 파일에 있는 모든 record를 보여줌
                {
                    DisplayRecords(fileStream);
                    break;
                }
                case 'x': // 종료
                {
                    bExit = true;
                    break;
                }
                default:
                {
                    cout << "invalid input" << endl;
                    break;
                }
            }
        }
        fileStream.close();
    }
}
