//
//  main.cpp
//  Pocu_CPP_6_4
//
//  Created by Wayne on 10/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Vector//member변수를 0으로 초기화하기(초기화되지 않은 값들은 모두 쓰레기값으로 정해져있음)
{
    int member;
};

int main(void)
{
    Vector* a = new Vector;
    
    void* ptr = malloc(sizeof(Vector));//c코드를 사용해서 변경
    memset(ptr, 0 , sizeof(Vector));
    a = (Vector*)ptr;
    return 0;
}
//new/delete(C++)와 malloc/free(C)의 차이점은???
