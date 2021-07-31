#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r1, r2, c1, c2, w1, w2; cin >> r1 >> w1 >> c1 ;
    cin >> r2 >> w2 >> c2;
    int a=0; int b=0; 


    if(r1>r2) a++;
    else b++;
    if(w1>w2) a++;
    else b++;
    if(c1>c2)a++;
    else b++;
    if(a>b) cout << "A" << endl;
    else cout << "B" << endl;
}

int main() {
    int t; cin >> t;
     while(t--) {
         solve();
     }
    }
