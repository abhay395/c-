#include<iostream>
using namespace std;

// Constant argument function
void printNumber(const int num) {
    // num = num + 1; // Error: Cannot modify a constant parameter
    int a= num+1;
    cout << "Number: " << a << endl;
}

int main() {
    int value = 5;

    cout << "Original Value: " << value << endl;

    printNumber(value);

    cout << "Value after calling function: " << value << endl;

    return 0;
}
