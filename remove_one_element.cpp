#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int  n; 
    cin >> n;
    vector < int > a;
    vector <int> b;
    unordered_set<int > s;
    int  x;
    for(int i=0; i< n; i++) {
      cin >> x;
      a.push_back(x);
      s.insert(x);
    }
    for(int i= 0; i< n-1; i++) {
        cin >> x; 
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = b[0]-a[1];
    for(auto i:b) {
      if(s.count(i-ans) == 0) {
        ans = b[0]-a[0];
        break;
      }
    }
    if(ans <= 0) ans = b[0]- a[0];
    cout << ans << endl;



  }

int main () {
  ios :: sync_with_stdio(0);
  ll testcase ; int i =1;
 
  cin >> testcase;
  while (testcase --) {
    // cout<< "Case #" << i << ":";
    solve();
    // ++i;;
    }
  }
 
 