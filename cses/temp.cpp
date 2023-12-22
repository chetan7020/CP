/*

Build | ..... | Peace


4 10
7 2 3 9

2 3 7 9

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define srt(a) sort(a.begin(), a.end())
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

void solve(){
	int n=0,cnt=0,ans=0;
	cin>>n;
	vector<vector<int>>a(n+1);
	for(int i=1;i<n;i++){
		int xy,;
		cin>>x>>y;
		a[a].pb(b);
		a[b].pb(a);
	}
	
	for(int i=1;i<=n;i++){
		if(a[i].size()==1)cnt++;
	}

	ans+=(cnt+1)/2;
	cout<<ans<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}