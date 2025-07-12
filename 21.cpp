#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if(a > b)
        cout << "Largest is " << a;
    else
        cout << "Largest is " << b;
    return 0;
}

