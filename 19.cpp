#include <iostream>
using namespace std;
bool isPalindrome(int n) {
    int original = n, rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return original == rev;
}
int main() {
    cout << isPalindrome(121);
    return 0;
}

