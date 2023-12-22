/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

int f(int lvl, int n){

	if(lvl>=n) return -1;

	if(lvl==n) return 0;

	int ans= INT_MAX;

	int temp= lvl;

	int digit;

    while (temp > 0) {
        digit = temp % 10;
        
        int t= f(lvl+digit, n);

        cout<<digit<<endl;

        if(t!=-1) ans= min(ans, 1+t);

        temp = temp/10;
    }

    if(ans!=INT_MAX) return ans;
    return -1;
}

void solve(){
	int n; cin>>n;

	// vector<int> dp(n+1, -1);

	cout<<f(1, n);

	// cout<<n;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}