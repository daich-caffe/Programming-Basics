#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 int i, sum = 0, n = -20;
 
 cout << sqrt(9234893) << endl;
 cout << log(2349) << endl;
 cout << pow(3.1, 1.6) << endl;
 cout << sin(28.3) << endl;
 
 for(i = -20 ; i <= 30 ; i++){
  n = fabs(i);
  sum += n;
 }
  
  cout << sum << endl;
}
