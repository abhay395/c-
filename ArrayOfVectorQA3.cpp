#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v={4,8,9,8,7};
    int x;
    cout << "Enter number x;";
    cin >> x;
    int numOfOccurence=0;
    for (int i = v.size()-1; i >= 0; i--)
    {
        if (v[i]>x)   
        {
            numOfOccurence++;
        }
        
    }
    cout << numOfOccurence;

    return 0;
}
