#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  ll n,s;
  cin >> n>>s;
  ll c= (n*(n+1)/2)-s;
  if(1<=c and  c<=n)cout<<c<<endl;
  else cout<<-1<<endl;


}





 
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(0); 
   cout.tie(0);
   int t; cin >> t;
   while(t--) {
     solve();
   }
}

    
