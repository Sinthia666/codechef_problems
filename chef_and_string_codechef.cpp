#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = (int)s.size();
        int count = 0;
        for(int i = 0; i<n ; i++) {
            if(s[i] != s[i+1] && (i+1)< n) {
                count++;
                i+=2;
            
            }
            else {
                i++;
            }
        }
        cout << count<< endl;

    }
     return 0;
}


