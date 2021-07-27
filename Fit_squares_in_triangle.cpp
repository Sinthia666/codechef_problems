#include <bits/stdc++.h>
// #define loop(a)  for(int i=0; i<a ; i++)
using namespace std;

int main() {
    int t; cin >> t; 
   
    while(t>0) {
       int n; cin >> n;
       n= n/2 -1;
       cout << (n+1)*(n) /2 << endl;
       t--;
    }
}