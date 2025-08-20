//摄氏度转华氏度
# include <iostream>
using namespace std;
constexpr double RATIO = 9.0/5.0; //提前计算常量比值

int main() {
    double celsius;
    cout << "输入摄氏度：";
    cin >> celsius;
    
    double fahrenheit = celsius * RATIO + 32;
    cout << "华氏度：" << fahrenheit << endl;

    return 0;
}