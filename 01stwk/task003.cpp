//整数反转(123->321)
#include <iostream>
#include <string>
#include <algorithm> //包含reverse函数
#include <climits> //添加头文件以使用INT_MAX和INT_MIN)
#include<stdexcept> //添加头文件以使用overflow_error
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "输入整数：";
    cin >> num;

    // 处理负数的情况
    bool isNegative = false;
    if (num < 0) {
        isNegative = true;
        num = -num; // 转为正数处理
    }

    //避免对字符串做数学运算
    string s = to_string(num);
    reverse(s.begin(), s.end());
    reversed = stoi(s);

    while(num){ 
        // 检查是否会溢出
        if (reversed > INT_MAX/10 || reversed < INT_MIN/10){
            throw overflow_error("数值溢出！");
        }
        // 获取最后一位数字并添加到反转数中
        int digit= num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    //如果是负数，恢复负号
    if (isNegative) {
        reversed = -reversed;
    }

    cout << "反转后：" << reversed << endl;
    return 0;
}