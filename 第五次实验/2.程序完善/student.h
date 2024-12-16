//student.h                (这是头文件，在此文件中进行类的声明)
class Student              //类声明
{
public:                   //公用成员函数原型声明
    void display();
    void set_value(int n, const char* nm, char s);  // 新增的设置值的成员函数声明
private:
    int num;
    char name[20];
    char sex;
};