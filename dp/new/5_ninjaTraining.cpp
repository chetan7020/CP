/*

Build | ..... | Peace


*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define int long long
#define srt(a) sort(a.begin(), a.end())
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

int n;
vector<vector<int>>  dp(100100, vector<int>(3, -1)), a(100100, vector<int>(3));

int f(int lvl, int last) {
    // prunning
    if (lvl >= n) return 0;

    // cache check
    if (dp[lvl][last] != -1) return dp[lvl][last];

    int maxi = INT_MIN;

    for (int i = 0; i < 3; i++) {
        if (last == i) continue;

        int ans = a[lvl][i] + f(lvl + 1, i);

        maxi = max(maxi, ans);
    }

    dp[lvl][last] = maxi;

    return dp[lvl][last];
}	

void solve(){
	cin>>n;
	fore(i,0,n){
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	}

	int mx=-1;

	for(int i=0; i<3; i++){
		mx=max(mx, a[0][i]+f(1, i));
	}
	cout<<mx;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}