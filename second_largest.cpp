#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; int a,b,c;
   
    cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        if((a>b&&c>a)||(a<b&&c<a))
	{
		cout<<a<<endl;
	}
	else if((b>a&&c>b)||(b<a&&c<b))
	{
		cout<<b<<endl;
	}
	else if((c>a&&c<b)||(c>b&&c<a))
	{ cout<<c<<endl;
	}
   }
	return 0;
}