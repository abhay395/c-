#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char vovels [5]={};
    for(char &element:vovels){
        cin >> element;
    }
    for(int idx =0; idx<5;idx++){
        cout << vovels[idx]<<endl;
    }
    
    return 0;
}
