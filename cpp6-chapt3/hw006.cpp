#include <iostream>
#include <iomanip>
using namespace std;
float gas_per_100km (float Gas, float Km);

int main() {
    float gas, km;
    cout << "How much distance your car ran (in km): ";
    cin >> km;
    cout << "How much gas your car consumed (in liter): ";
    cin >> gas;
    cout << fixed << setprecision(2);
    cout << "Your car consumes " << gas_per_100km (gas, km) << " liters of gas per 100 km." << endl;
    return 0;
}

float gas_per_100km (float Gas, float Km) {
    return (Gas / Km) * 100;
}