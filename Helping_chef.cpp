#include <bits/stdc++.h>
using namespace std;

void HelpingChef() {
  int A; cin >> A  ;
  
  
  if (A < 10) {
    cout << "Thanks for helping Chef!" << endl;
  }

  else {
    cout << -1 << endl;
  }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        HelpingChef();
    }
}