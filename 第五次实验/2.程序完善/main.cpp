//main.cpp                      主函数模块
#include <iostream>
#include "student.h"

int main()
{
    Student stud;                //定义对象
    Student stud1;
    stud.set_value(001, "csu", 'm');  // 通过set_value函数给stud对象赋值
    stud1.set_value(007, "tcg", 'm');
    stud.display();              //执行stud对象的display函数
    stud1.display();
    return 0;
}