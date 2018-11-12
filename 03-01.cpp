#include <iostream>
using namespace std;
int main()
{
  int x = 30 ,  y = 20 , z = 0 ;
  cout << x << "," << y << endl;
  z = x;
  x = y;
  y = z;
  cout << x << "," << y << endl;
 }
