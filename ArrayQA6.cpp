#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int array[]={4,8,9,7,5};
    int sum=0;
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
       if (i%2==0)
       {
        sum+=array[i];
       }else{
        sum-=array[i];
       }
       
    }
    cout <<"differnce of oddindex and evenidex="<< sum<<endl;
    //   int Oddsum=0;
    // int Evensum=0;
    // for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    // {
    //    if (i%2==0)
    //    {
    //     Oddsum+=array[i];
    //    }else{
    //     Evensum-=array[i];
    //    }
       
    // }
    // cout << "OddSum="<<Oddsum<<endl;
    // cout << "Evensum="<<Evensum<<endl;
    // cout <<"OddSum-EvenSum="<< Oddsum-Evensum<<endl;
    return 0;
}
