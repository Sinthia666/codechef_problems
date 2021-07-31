#include <bits/stdc++.h>
using namespace std;
#define lli long long int

void solve() {
    lli x, y; cin >> x >> y; lli ans = x+y;
 
   
    if(ans >=6) cout << "0" << endl;

   
    else cout << (6 - (x + y)) / 6.0 << "\n";


    
}

int main() {
    int t; cin >> t;
     while(t--) {
         solve();

     }
    }
