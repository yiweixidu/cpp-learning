#include <iostream>
#include <string>
using namespace std;

int main() {
    string Name, Address;
    cout << "Enter your name: ";
    getline(cin, Name);
    cout << "Enter your address: ";
    getline(cin, Address);

    cout << "Your Name is " << Name << " and Your Address is " << Address << endl;

return 0;
}
