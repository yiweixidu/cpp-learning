#include <iostream>
using namespace std;
int main() {
    const int inchs_per_foot = 12;
    int height, foot_height, inch_height;
    cout << "Enter your height in inches: __\b\b";
    cin >> height;
    foot_height = height / inchs_per_foot;
    inch_height = height % inchs_per_foot;
    cout << "Your height: " << foot_height << " feet and " << inch_height << " inches" << endl;
    return 0;
}