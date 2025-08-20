#include <iostream>
using namespace std;
const int minofarc_per_degreeofarc = 60, secofarc_per_minofarc =60;
float degree (int degreeOfArc, int minOfArc, int secOfArc);//声明函数

int main(){
    int degreeofarc, minofarc, secofarc;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degreeofarc;
    cout << "Next, enter the minutes of arc: ";
    cin >> minofarc;
    cout << "Finally, enter the seconds of arc: ";
    cin >> secofarc;
    cout << degreeofarc << " degrees, " << minofarc << " minutes, " << secofarc << " seconds = " 
    << degree (degreeofarc, minofarc, secofarc) << " degrees." << endl;//调用函数
    return 0;
}

float degree (int degreeOfArc, int minOfArc, int secOfArc) {//定义函数
    return degreeOfArc + minOfArc / static_cast<float>(minofarc_per_degreeofarc) + secOfArc / static_cast<float>(secofarc_per_minofarc * minofarc_per_degreeofarc);
}