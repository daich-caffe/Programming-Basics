#include <iostream>
#include <cmath>
using namespace std;

double average(int a, int b, int c, int d, int e){
  double ave;
  ave = (a+b+c+d+e)/5;
  cout << ave << endl;
  return ave;
}

int main()
{
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  average(a, b, c, d, e);
}
