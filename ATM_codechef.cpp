#include <bits/stdc++.h>
using namespace std;
int main() {

   int x;
   double y;
   cin >> x >> y;

   if((x%5==0) && ((x+0.5)<=y)) {
       float c = y-x-0.5;
       cout << c << endl;
   }
   else {
       cout << y << endl;
   }

}