#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int n, m;
    cin >> n;
    cin >> m;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= m; i++)
        {
            cout << '*';
        }
        cout<<endl;
    }
    return 0;
}
