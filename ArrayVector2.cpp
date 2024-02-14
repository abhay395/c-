#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myVector;

    cout << "Initial Capacity: " << myVector.capacity() << endl;

    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.insert(myVector.begin()+1,4);
 
    cout << "Current Size: " << myVector.size() << endl;
    cout << "Current Capacity: " << myVector.capacity() << endl;
 
    myVector.push_back(4);

    cout << "Current Size: " << myVector.size() << endl;
    cout << "Current Capacity: " << myVector.capacity() << endl;
    cout << "insert element: " << myVector[0] << endl;
    myVector.resize(8);
    cout << myVector.size()<<endl;
    myVector.pop_back();
    myVector.erase(myVector.begin()+1);
    cout << myVector.size()<<endl;
    
    return 0;
}
