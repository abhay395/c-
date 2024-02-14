#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v(5);
    int x;
    // cout << "Enter number x;";
    // cin >> x;
    for(int i=0;i<5;i++){
        // int el;
        cin >> v[i];
    }
    bool sortFlag=true;
    for (int i = 1; i <v.size(); i++)
    {
        if (v[i]<=v[i-1])   
        {
            sortFlag=false;
        }
        
    }
    cout << sortFlag;

    return 0;
}
