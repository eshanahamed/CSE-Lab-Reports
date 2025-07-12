#include<iostream>
using namespace std;
int main() {
    int arr[10];
    cout << "Enter 10 numbers:\n";
    for(int i = 0; i < 10; i++)
        cin >> arr[i];
    cout << "You entered:\n";
    for(int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    return 0;
}

