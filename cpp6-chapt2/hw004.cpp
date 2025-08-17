#include <iostream>
int agetomonth (int age, int birthMonth, int currentMonth);
int main () {
    using namespace std;
    int age, birth_month, current_month;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your birth month is (1-12): ";
    cin >> birth_month;
    cout << "Current month is (1-12): ";
    cin >> current_month;
    cout << "Your age in months is: " << agetomonth (age, birth_month, current_month) << endl;
    return 0;
}
int agetomonth (int age, int birthMonth, int currentMonth) {    
    if (currentMonth >= birthMonth){
        return age*12 + (currentMonth - birthMonth);
    } else {
        return (age+1)*12 + (currentMonth - birthMonth);
    }
}