#include <iostream>
using namespace std;
class Student {
private:
    float score = 0;
    static int count;
    static float total;
public:
    Student() {};
    ~Student() {};
    void scoretotalcount(float s) {
        score = s;
        ++count;
        total += score;
    }
    static float sum() {
        return total;
    }
    static float average() {
        return total / count;
    }

};
int Student::count = 0;
float Student::total = 0;
int main() {
    float s;
    Student student;
here:
    cout << "请输入班级同学的成绩：" << endl << "结束请输入: 0" << endl;
    cin >> s;
    if (s != 0) {
        student.scoretotalcount(s);
        goto here;
    }
    cout << "总分：" << student.sum() << endl << "平均分：" << student.average() << endl;
    return 0;
}
