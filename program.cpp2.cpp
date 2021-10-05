#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    string a, b;
    cin >> a >> b;
    if(a==b) cout << "-1" << endl;
    else{
        int ans=max(a.length(), b.length());
        cout << ans << endl;
    }
 
 
 
    return 0;
}
