#include <bits/stdc++.h>
using namespace std;

void resmissness() {
  int A,B; cin >> A >> B ; int sum ;
  sum = A + B ;
  
  if (A > B) {
    cout << A << " " << sum << endl;
  }
  else {
    cout << B << " " << sum << endl;
  }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        resmissness();
    }
}