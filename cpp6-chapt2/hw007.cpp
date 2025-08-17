#include <iostream>
void displayTime (int hour, int min);
int main () {
    using namespace std;
    int hourNum, minNum;
    cout << "Enter the number of hours: ";
    cin >> hourNum;
    cout << "Enter the number of minutes: ";
    cin >> minNum;
    displayTime (hourNum, minNum);
    return 0;
}
void displayTime (int hour, int min) {
    using namespace std;
    if (min >= 10) {
        cout << "Time: " << hour << ":" << min << endl;
    } else {
        cout << "Time: " << hour << ":0" << min << endl;
    }
}