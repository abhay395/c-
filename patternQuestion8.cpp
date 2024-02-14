#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

   int n,m;
   cin >> n;
   cin >> m;
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= m; j++)
      {
         // if (i % 2 != 0)
         // {
         //    if (j % 2 != 0)
         //    {
         //       cout << 1;
         //    }
         //    else
         //    {
         //       cout << 2;
         //    }
         // }else{
         //       if (j % 2 != 0)
         //    {
         //       cout << 2;
         //    }
         //    else
         //    {
         //       cout << 1;
         //    }
         // }
         if((i+j)%2==0){
            cout << 2;
         }else{
            cout << 1;
         }
      }

      cout << endl;
   }

   return 0;
}
