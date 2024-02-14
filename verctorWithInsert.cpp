#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v = {7, 8, 9, 10, 8};
    // cout << v.size();
    v.insert(v.begin()+1,10);
    v.erase(v.end());
    for (int i = 0; i < 5; i++)
    {
        cout << v[i]<<" ";
    }

    return 0;
}
