#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int n ;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
     for (int j = 1; j <= n; j++)
     {
      if(i==1||j==1||i==n||j==n){
         cout << j;
      }else{
         cout << ' ';
      }
     }
     
         cout << endl;
        
    }
    
    return 0;
}