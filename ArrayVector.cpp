#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myVector;

    cout << "Initial Capacity: " << myVector.capacity() << endl;

    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(3);
    myVector.push_back(3);
    myVector.push_back(3);
    myVector.push_back(3);
    myVector.push_back(3);
    myVector.push_back(3);

    cout << "Current Size: " << myVector.size() << endl;
    cout << "Current Capacity: " << myVector.capacity() << endl;
 
    myVector.push_back(4);

    cout << "Current Size: " << myVector.size() << endl;
    cout << "Current Capacity: " << myVector.capacity() << endl;

    return 0;
}
