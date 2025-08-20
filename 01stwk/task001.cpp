//计算圆的面积
#include <iostream>
#include <iomanip>
using namespace std;

//计算面积的函数（定义在main外部）
double calc_area(double radius) {
    constexpr double PI= 3.1415926536; //C++11 常量表达式
    return PI * radius * radius;
}

int main() {
    double r;
    cout <<"输入半径：";
    cin >> r;

    //验证输入有效性
    if (cin.fail() || r <= 0) {
        cerr << "错误：请输入正数！" << endl;
        return 15;//非0返回值表示错误
    }

    //计算并输出面积
    double area = calc_area(r);
    cout << fixed << setprecision(2) << "面积：" << area << endl;

    {
    //新作用域内定义 float r
    float r_float = static_cast<float>(r);//显式转换

    //验证float大小
    static_assert(sizeof(float) == 4, "float应为4字节");

    //计算float面积
    float float_area =calc_area(r_float);
    cout << "float计算面积:" << float_area << endl;
    } 

    return 0;
}