//学生成绩计算与等级评定
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <vector> //用于存储多个学生数据
#include <sstream> //用于字符串流
using namespace std;

//使用const常量保存等级边界值
const double GRADE_A = 90.0;
const double GRADE_B = 80.0;
const double GRADE_C = 70.0;
const double GRADE_D = 60.0;

//学生数据结构
struct Student {
    string name;
    double score;
    char grade;
}; //注意：结构体定义后需要分号

//提取等级判断为函数
char getGrade(double score) {
    if (score >= GRADE_A) return 'A';
    else if (score >= GRADE_B) return 'B';
    else if (score >= GRADE_C) return 'C';
    else if (score >= GRADE_D) return 'D';
    else return 'F';
}

int main () {
    const int NUM_STUDENTS = 5; //学生数量
    vector<Student> students(NUM_STUDENTS);//存储学生数据的向量

    //输入5个学生的信息
    for (int i=0; i < NUM_STUDENTS; i++){
        cout << "\n学生 #" << i + 1 << ":" << endl;

        cout << "请输入学生姓名：";
        getline(cin, students[i].name);

        //循环验证输入合法性
        while (true) {
            cout << "请输入成绩 (0-100)：";
            cin >> students[i].score;
            if (cin.fail() || students[i].score < 0 || students[i].score > 100) {
                cout << "输入错误，请重新输入！" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //清除缓冲区中的换行符
            } else {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }
        }

        //计算等级
        students[i].grade = getGrade(students[i].score);
    }

    //输出所有学生信息
    cout << "\n\n学生成绩汇总:\n";

    //输出表头
    cout << string(50, '-') << endl;
    cout << left << setw(8) << "序号" 
         << left << setw(20) << "姓名" 
         << left << setw(12) << "成绩" 
         << left << "等级" 
         << endl;
    cout << string(50, '-') << endl;

    //输出学生数据
    for (int i = 0; i < NUM_STUDENTS; i++) {
        
        //创建成绩字符串，确保两位数显示
        ostringstream scoreStream;
        scoreStream << fixed << setprecision(2) <<students[i].score;
        string scoreStr = scoreStream.str();
        if (students[i].score < 10){
            scoreStr ="0" + scoreStr;//添加前导零
        }

        cout << left << setw(8) << (i + 1) 
             << left << setw(20) << students[i].name 
             << left << setw(12) << scoreStr 
             << left << students[i].grade 
             << endl;
    }
    cout << string(50, '-') << endl;
    return 0;
}
