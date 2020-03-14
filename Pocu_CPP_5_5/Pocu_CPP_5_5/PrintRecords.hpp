//
//  PrintRecords.hpp
//  Pocu_CPP_5_5
//
//  Created by Wayne on 10/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#pragma once
#ifndef PrintRecords_hpp
#define PrintRecords_hpp

#include <stdio.h>
#include <iostream>
#include <string>

#endif /* PrintRecords_hpp */

struct Record//PrintRecords.cpp에서 사용할 structure
{
    std::string FirstName;
    std::string LastName;
    std::string StudentID;
    std::string Score;
};

namespace  samples
{
    Record ReadRecord(std::istream& stream, bool bPrompt);//istream은 파일에서 직접 혹은 사용자가 키보드를 통해 입력할 수 있다.
                                                          //bPrompt는 키보드에서 입력받았을 경우 사용자에게 정보를 알려주기 위해서 쓰는 매개변수다.
                                                          //bPrompt == true : 사용자에게 입력받았을 경우, == false : 파일에서 직접 받는 경우

    void WriteFileRecord(std::fstream& outputStream, const Record& record); //fileStream의 record를 사용
    void DisplayRecords(std::fstream& fileStream);                          //fileStream을 가져옴. 화면에 보여주기 위한 함수
    void ManageRecordsExample();                                            //진입점(설명을 보여주는 함수)
}
