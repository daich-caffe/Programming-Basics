#include <iostream>

using namespace std;

int main()
 { 
   int i;
   int a[20];
   
   for ( i = 0 ; i < 20 ; i++ ){
    a[i] = rand();
   }
   for ( i = 0 ; i < 20 ; i++ ){
    if ( a[i] % 2 == 0 || a[i] % 3 == 0 ){
     cout << a[i] << endl;
     }}
  }
   
