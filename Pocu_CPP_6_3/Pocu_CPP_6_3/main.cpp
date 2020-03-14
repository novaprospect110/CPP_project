//
//  main.cpp
//  Pocu_CPP_6_3
//
//  Created by Wayne on 10/03/2020.
//  Copyright © 2020 Wayne. All rights reserved.
//

#include <iostream>

using namespace std;

class Vector
{
public://이거 안 쓰면 mX,mY 모두 private로 되어있으므로 꺼내서 쓸 수 없다!
    int mX;
    int mY;
};

Vector sum_function(const Vector& a, const Vector& b);
void result_function(const Vector ans1);

int main2(void);
Vector sum_function2(const Vector& c, const Vector& d);
void result_function2(const Vector ans2);

int array_function(void);//개체 배열(object array)함수

int main(void)
{
    //stack을 이용한 메모리 저장(class사용)
    Vector a;//stack은 바로 선언해서 사용가능
    Vector b;
    a.mX = 4;
    a.mY = 3;
    b.mX = 6;
    b.mY = 8;
    
    Vector ans1 = sum_function(a, b);
    result_function(ans1);
    
    main2();
    array_function();
    return 0;
}
 
Vector sum_function(const Vector& a , const Vector& b)//참조는 데이터복사 안하겠다! 단,데이터가 바뀌면 안되므로 const로 함수 내부에서 a와 b값 변경 불가!
{
    Vector result;
    result.mX = a.mX + b.mX;
    result.mY = a.mY + b.mY;
    
    return result;
}
void result_function(const Vector ans1)
{
    cout << ans1.mX << " " << ans1.mY << endl;
}




int main2(void)
{
    //heap을 이용한 메모리 저장(class사용)
    Vector* c = new Vector;//heap은 포인터를 이용해야 사용가능
    Vector* d = new Vector;
    c -> mX = 4;
    c -> mY = 3;
    d -> mX = 6;
    d -> mY = 8;
    
    Vector ans3 = sum_function(*c, *d);
    result_function(ans3);
    
    delete c;//메모리 해제를 꼭 해주어야 함.
    delete d;
    
    return 0;
}
Vector* sum_function2(const Vector* c, const Vector* d)
{
    Vector* ans2 = new Vector;
    ans2 -> mX = c -> mX + d -> mX;
    ans2 -> mY = c -> mY + d -> mY;
    return ans2;
}
void result_function2(const Vector* result)
{
    cout << result -> mX << " " << result -> mY << endl;
}

int array_function(void)
{
    Vector* list1 = new Vector[10];   //10개의 벡터 개체를 heap에 만듦   ---> Java에서는 없음
    Vector** list2 = new Vector*[10]; //10개의 포인터를 heap에 만듦
    
    Vector* a = new Vector;
    Vector* list3 = new Vector[10];
    
    delete a;//반드시 new가 붙은 것들은 무조건 끝에 delete 해주어야 메모리 누수를 막을 수 있다!
    a = NULL;//불필요
    delete[] list1;//선언할 때 Vector[n]꼴로 new를 붙인 경우에는 반드시 delete할 때 [](대괄호)를 써주어야 한다!
    list2 = NULL;
    delete[] list3;
    return 0;
}
