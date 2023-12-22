/*

Build | ..... | Peace


*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

void solve(){

    int a, b;
    cin>>a>>b;
    int c = a, f = b;
    int res = 0, cnt1 = 0, cnt2 = 0;
    while(b>=1){
        if(a%b==0) break;
        a++, b--;
        cnt1++;
    }
    while(c>=1){
        if(c%f==0) break;
        c--, f++;
        cnt2++;
    }
    if(c>=f) cout<<min(cnt1, cnt2)<<endl;
    else cout<<cnt1<<endl;

}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    int t; cin>>t;

    while(t--) solve();

	return 0;

}