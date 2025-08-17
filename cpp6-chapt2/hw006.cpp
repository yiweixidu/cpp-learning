#include <iostream>
double LYtoAstronomicalUnit (double LightYear);
int main () {
    using namespace std;
    double light_year;
    cout << "Enter the number of light years: ";
    cin >> light_year;
    cout << light_year << " light years = " << LYtoAstronomicalUnit (light_year) << " astronomical units." << endl;
    return 0;
}
double LYtoAstronomicalUnit (double LightYear) {
    return LightYear*63240;
}