#include <bits/stdc++.h>
using namespace std;

void operators() {
  int A,B; cin >> A >> B ;
  
  
  if (A > B) {
    cout << ">" << endl;
  }
  else if(A < B) {
    cout << "<" << endl;
  }
  else if(A ==B) {
    cout << "=" << endl;
  }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        operators();
    }
}