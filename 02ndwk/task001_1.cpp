//判断闰年方案1
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "输入年份：";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "闰年/条件1" << endl;
            } else {
                cout << "平年/条件1" << endl;
            }
        } else {
            cout << "闰年/条件2" << endl;
        }
    } else {
        cout << "平年/条件2" << endl;
    }
    return 0;
}