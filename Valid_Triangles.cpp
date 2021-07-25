#include <bits/stdc++.h>
using namespace std;

void triangle() {
  int A,B,C; cin >> A >> B >> C; int sum ;
  sum = A + B + C;
  
  if (sum == 180) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        triangle();
    }
}