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

using namespace std;z

void solve(){
	int n; cin>>n;

	vector<int>a(n);

	fore(i,0,n) cin>>a[i];

	int mx1=INT_MIN, mx2=INT_MIN, mx3=INT_MIN;

	int curr=0;

	for(int i=0; i<n; i++){
		curr+=a[i];
		mx1=max(mx1, curr);
		curr=max(curr, 0LL);
	}

	curr=0;

	for(int i=0; i<n-1; i++){
		curr+=a[i];
		mx2=max(mx2, curr);
		curr=max(curr, 0LL);
	}

	curr=0;

	for(int i=1; i<n; i++){
		curr+=a[i];
		mx3=max(mx3, curr);
		curr=max(curr, 0LL);
	}

	if(max(mx2,mx3)<mx1) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		solve();
	}

	return 0;

}