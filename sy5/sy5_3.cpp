#include <iostream>
#include<string>
using namespace std;
class Person
{
protected:
    string name;
    string sex;
    int age;
public:
    Person(string name, string sex, int age)
    {
        this->name = name;
        this->sex = sex;
        this->age = age;
    }
};
class Student :public Person
{
private:
    string xibie;
public:
    string no;
    Student(string name, string sex, int age, string no, string xibie) :Person(name, sex, age)
    {
        this->xibie = xibie;
        this->no = no;
    }
    void show()
    {
        cout << name << "\t" << sex << "\t" << age << " \t" << no << "\t" << xibie << endl;
    }
};
class Teacher :public Person
{
private:
    string zhicheng;
    string teach;
public:
    Teacher(string name, string sex, int age, string zhicheng, string teach) : Person(name, sex, age)
    {
        this->zhicheng = zhicheng;
        this->teach = teach;
    }
    void show()
    {
        cout << name << "\t" << sex << "\t" << age << "\t" << zhicheng << "\t" << teach << endl;
    }
};
class Gradstudent :public Student
{
private:
    string daoshi;
    string xibie;
public:
    Gradstudent(string name, string sex, int age,string no, string xibie, string daoshi) : Student(name, sex, age,no,xibie)
    {
        this->daoshi = daoshi;
        this->xibie = xibie;
    }
    void show()
    {
        cout << name << "\t" << sex << "\t" << age << "\t" << no << "\t" << xibie << "\t" << daoshi << endl;
    }
};
int main()
{
    Student s("闫祥", "男", 20, "19402", "计算机系");
    Teacher t("吴志坚", "女", 40, "教师", "C++");
    Gradstudent g("张三", "男", 26, "16402" ,"外语系", "李娜");
    cout << "姓名" << "\t" << "性别" << "\t" << "年龄" << "\t" << "学号" << "\t" << "属性" <<"\t" <<"导师"<< endl;
    s.show();
    g.show();
    t.show();
    return 0;
}