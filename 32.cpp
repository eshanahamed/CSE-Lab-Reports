#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int gcd, lcm, x = a, y = b;
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (x * y) / gcd;
    cout << "GCD: " << gcd << ", LCM: " << lcm;
    return 0;
}

