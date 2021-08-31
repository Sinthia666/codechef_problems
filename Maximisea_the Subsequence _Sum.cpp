#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n, k; cin >> n >> k;
    vector< int> v;
    int x;
    // int v[n];

    for(int i=0 ; i< n ; i++) {
      cin >> x;
      v.push_back(x);
    }
    sort(v.begin(), v.end());
    // sort(v, v+n);
    for(int i=0; i< n; i++) {
      if(v[i]>=0) {
        break;
      }
      v[i]*=-1;
    }
    ll count = 0;
    for(int i=0; i<n; i++) {
      if(v[i]>0) {
        count+=v[i];
      }
    }
    cout<< count << endl;
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
 
 