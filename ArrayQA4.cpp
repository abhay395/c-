#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int array[] = {93, 5, 8, 45, 89};
    int size = sizeof(array) / sizeof(array[0]);
    int key;
    cin >> key;
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        if (key == array[i])
        {
            ans = i;
            break;
        };
    }
    cout << ans;
    return 0;
}
