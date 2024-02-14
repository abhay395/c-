#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v(5);
    for (int &ele : v)
    {
        cin >> ele;
    }
    cout << "Enter x:";
    int x;
    cin >> x;
    int occurence = -1;
    for (int i = v.size()-1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            occurence = i;
            break;
        }
        // cout << v[i];
    }
    cout << occurence;

    return 0;
}
