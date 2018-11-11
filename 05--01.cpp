#include <iostream>

using namespace std;

int main()
{
   int i;
   double a[5];
   
   for(i = 0 ; i < 5 ; i++){
    cin >> a[i];
   }
   
   for(i = 0 ; i < 5 ; i++){
    cout << 2* a[i] << endl;
   }
}

