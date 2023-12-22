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
	int n; cin>>n;
	vector<int>a(n);
	fore(i,0,n) cin>>a[i];

	srt(a);

	int k=a[n/2], ans=0;

	fore(i,0,n) ans+=abs(a[i]-k);

	cout<<ans;
}
#define srt(a) sort(a.begin(), a.end())

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}