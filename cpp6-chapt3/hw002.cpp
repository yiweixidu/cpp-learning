#include <iostream>
#include <iomanip>
using namespace std;

const int inchs_per_foot = 12;
const float lbs_per_kg = 2.2, meters_per_inch = 0.0254;
float BMI (float kg_Weight, float meter_Height);//声明函数

int main() {
    
    int foot_height, inch_height;
    float lb_weight;
    cout << "Enter your height in feet and inches:" << endl;
    cout << "feet: __\b\b";
    cin >> foot_height;
    cout << "inches: __\b\b";
    cin >> inch_height;
    cout << "Enter your body weight: ___ lbs\b\b\b\b\b\b\b";
    cin >> lb_weight;
    cout << fixed << setprecision(2);
    float meter_height = (foot_height * inchs_per_foot + inch_height) * meters_per_inch;
    float kg_weight = lb_weight / lbs_per_kg;
    cout << "Your BMI: _____\b\b\b\b\b" << BMI (kg_weight, meter_height) << endl;//调用函数
    return 0;
}

float BMI (float kg_Weight, float meter_Height) {
    return kg_Weight / (meter_Height * meter_Height);//定义函数
}