#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

   int n,m;
   cin >> n;
   // // cin >> m;
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= (n-i); j++)
      {
         cout << ' ';
      }
      for (int j = 1; j <= i; j++)
      {
         cout << j;
      }
      for (int j = (i-1); j >=1; j--)
      {
         cout << j; 
      }
      
      cout << endl;
   }

   return 0;
}
