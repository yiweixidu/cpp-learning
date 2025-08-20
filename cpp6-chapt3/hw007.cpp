#include <iostream>
#include <iomanip>
using namespace std;
const float miles_per_100km = 62.14, liters_per_gallon = 3.875;
float miles_per_gallon (float liters_Per100Km);

int main() {
    float liters_per100km;
    cout << "How much liters of gas your car consumes per 100 km: ";
    cin >> liters_per100km;
    cout << fixed << setprecision(2);
    cout << "Your car runs " << miles_per_gallon (liters_per100km) << " miles by consuming 1 gallon of gas." << endl;
    return 0;
}

float miles_per_gallon (float liters_Per100Km) {
    return miles_per_100km / (liters_Per100Km / liters_per_gallon);
}