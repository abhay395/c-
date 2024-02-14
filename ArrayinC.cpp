#include<iostream>
using namespace std;

int main() {
   int array[]={1,2,3,4};
//    cout <<sizeof(array)<<endl;
//    cout <<sizeof(array)/sizeof(array[0])<<endl;
   for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
   {
    cout << array[i]<<endl;
   }
   for(int element:array){
    cout << element<<endl;
   }
   int index=0;
  while (index<(sizeof(array)/sizeof(array[0])))
  {
   cout << array[index]<<endl;
   index++;
  }
  
    return 0;
}