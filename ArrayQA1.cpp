#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int array[]={3,5,8,9};
    int sum =0;
    // for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    // {
    //    sum+=array[i];
    // }
    for(int el:array){
        sum+=el;
    }
    cout << sum;
    
    return 0;
}
