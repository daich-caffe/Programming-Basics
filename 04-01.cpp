#include <iostream>
using namespace std;
int main(){
 int x;
  cin >> x;
 double y = 3.14;
 
 double volume = (4* x* x* x* y)/3;
 double area =4* x* x* y;
 
if (volume==area){
 cout << "Equal!" << endl; }
else if (volume > area){
 cout << "Volume is larger" << endl; }
else {
 cout << "Area is larger" << endl; }
}
