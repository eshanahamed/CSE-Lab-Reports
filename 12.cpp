#include <iostream>
using namespace std;
void checkEvenOdd(int n) {
    if(n % 2 == 0) cout << "Even";
    else cout << "Odd";
}
int main() {
    checkEvenOdd(4);
    return 0;
}

