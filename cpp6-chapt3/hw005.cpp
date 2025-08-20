# include <iostream>
using namespace std;
float percentage (long long population_OfUS, long long population_Total);

int main(){
    long long population_ofUS, population_total;
    cout << "Enter the world's population: ";
    cin >> population_total;
    cout << "Enter the population of the US: ";
    cin >> population_ofUS;
    cout << "The population of the US is " << percentage (population_ofUS, population_total) << "% of the world population." << endl;
    return 0;
}

float percentage (long long population_OfUS, long long population_Total) {
    return (static_cast<float> (population_OfUS) / static_cast<float> (population_Total)) * 100;
}