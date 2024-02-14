#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int array[]={93,5,8,45,89};
    int size = sizeof(array)/sizeof(array[0]);
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
       if(max<array[i]) max=array[i];
    }
    cout << max;
    return 0;
}
