#include <iostream>
using namespace std;
int maxOfThree(int a, int b, int c) {
    return (a > b && a > c) ? a : (b > c ? b : c);
}
int main() {
    cout << maxOfThree(10, 20, 15);
    return 0;
}

