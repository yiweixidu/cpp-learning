#include <iostream>
double longtoyard (double longValue);
int main () {
    using namespace std;
    double input;
    cout << "Enter a distance in unit of long: ";
    cin >> input;
    cout << input << " longs = " << longtoyard(input) << " yards" << endl;
    return 0;
}
double longtoyard (double longValue) {
    return 220*longValue;
}