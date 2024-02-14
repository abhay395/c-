
#include<iostream>
using namespace std;

void incrementByValue(int &num) {
    (num)++;
}

int main() {
    int value = 5;
    int &q =value;
    q++;
    cout << "Original Value: " << value << endl;
    cout << "Original Value: " << &q << endl;
    incrementByValue(value);

    cout << "Value after Incrementing by Address: " << value << endl;

    return 0;
}

// 25:11
// 26:13
// #include<iostream>
// using namespace std;

// void incrementByAddress(int *numPtr) {
//     (*numPtr)++;
// }

// int main() {
//     int value = 5;

//     cout << "Original Value: " << value << endl;

//     incrementByAddress(&value);

//     cout << "Value after Incrementing by Address: " << value << endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;

// void incrementByReference(int &num) {
//     num++;
// }

// int main() {
//     int value = 5;

//     cout << "Original Value: " << value << endl;

//     incrementByReference(value);

//     cout << "Value after Incrementing by Reference: " << value << endl;

//     return 0;
// }

