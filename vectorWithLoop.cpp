#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    // cout << v.size();
    // for (int i = 0; i < 5; i++)
    // {
    //     int element ;
    //     cin >> element;
    //    v.push_back(element);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << v [i+5]<<endl;
    // }
    // // for (int &ele : v)
    // // {
    // //     int element;
    // //     cin >> element;
    // //     v.push_back(element);
    // // }
    for (int ele : v)
    {
       cout << ele<<" ";
    }
    return 0;
}
