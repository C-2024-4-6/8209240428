//main.cpp                      ������ģ��
#include <iostream>
#include "student.h"

int main()
{
    Student stud;                //�������
    Student stud1;
    stud.set_value(001, "csu", 'm');  // ͨ��set_value������stud����ֵ
    stud1.set_value(007, "tcg", 'm');
    stud.display();              //ִ��stud�����display����
    stud1.display();
    return 0;
}