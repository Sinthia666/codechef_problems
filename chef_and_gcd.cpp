#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b; cin >> a >> b ;
  
       if(__gcd(a,b)>1) {
            cout << "0" << endl;
        
        }
        else if(__gcd(a+1,b)>1) {

            cout << "1" << endl;
        }
        else if(__gcd(a, b+1)>1) {
            cout << "1" << endl;
        }
        else {
            cout << "2 " << endl;
        }
             
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; cin >> t; 
   
    while(t--) {
            
        solve();
            
        }
        return 0;
        }
