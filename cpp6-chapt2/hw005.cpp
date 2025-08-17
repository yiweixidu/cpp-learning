#include <iostream>
double CtoF (double CelsiusValue);
int main () {
    using namespace std;
    double celsius_value;
    cout << "Please enter a Celsius value: ";
    cin >> celsius_value;
    cout << celsius_value << " degrees Celsius is " 
    << CtoF (celsius_value) 
    << " degrees Fahrenheit." << endl;
    return 0;
}
double CtoF (double CelsiusValue) {
    return 1.8*CelsiusValue + 32.0;
}