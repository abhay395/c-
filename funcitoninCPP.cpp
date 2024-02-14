#include <iostream>
// #include <>
using namespace std;

int add(int a, int b){
   int sum = a+b;
    return sum;
}
int add(int a, int b,int c){
   int sum = a+b+c;
    return sum;
}
float add(float a, float b){
   float sum = a+b;
    return sum;
}
int main()
{
    // int a, b;
    // cin >> a>>b;
    // int sum1 = add(a,b);
    // int sum2 = add(a,b,4);
    // float sum3 = add(4.2,3.1);
    // cout <<"sum1"<< sum1<<endl;
    // cout <<"sum2"<< sum2<<endl;
    int a=4.2;
    int b=5.2;
    cout <<"sum3"<< add(a,b); 
    return 0;
}
