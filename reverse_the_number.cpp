#include <bits/stdc++.h>
using namespace std;

void resverse() {
      int n, reverse=0, rem;    
     cin>>n;    
     while(n!=0)    
  {    
     rem=n%10;      
     reverse=reverse*10+rem;    
     n/=10;    
  }   
  cout << reverse << endl;
}

int main() {
    int t; cin>>t;
    while(t--) {
        resverse();
    }
    return 0;
}
