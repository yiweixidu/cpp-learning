#include <iostream>
using namespace std;
const int sec_per_min = 60, min_per_hr = 60, hr_per_day = 24;
int sec (long long Sec);
int min (long long Sec);
int hr (long long Sec);
int day (long long Sec);

int main() {
    long long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    cout << seconds << " seconds = " << day (seconds) << " days, " 
    << hr (seconds) << " hours, " << min (seconds) << " minutes, " 
    << sec (seconds) << " seconds" << endl;
    return 0;
}

int day (long long Sec) {
    return Sec / (sec_per_min * min_per_hr * hr_per_day);
}

int hr (long long Sec) {
    return (Sec % (sec_per_min * min_per_hr * hr_per_day)) / (sec_per_min * min_per_hr);
}

int min (long long Sec) {
    return ((Sec % (sec_per_min * min_per_hr * hr_per_day)) % (sec_per_min * min_per_hr)) / sec_per_min;
}

int sec (long long Sec) {
    return ((Sec % (sec_per_min * min_per_hr * hr_per_day)) % (sec_per_min * min_per_hr)) % sec_per_min;
}