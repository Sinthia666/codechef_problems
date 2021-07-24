#include <bits/stdc++.h>
using namespace std;

unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t,n; 
   
    cin >> t;
    while(t--) {
        cin >> n;
		cout << factorial(n) << endl;
   }
	return 0;
}