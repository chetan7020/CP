/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define int long long
#define srt(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)
#define sum(a) accumulate(a.begin(), a.end(), 0LL)
#define maxi(a) *max_element(a.begin(), a.end())
#define mini(a) *min_element(a.begin(), a.end())

using namespace std;

int check(vector<int>&a, int s, int t){
	int p=0;
	// int l=;

	for(auto i:a){
		// p+=min((s/i), (int)1e8);
		p+=(s/i);
		if(p>=t) return 1;
	}

	// if(p>=t) return 1;
	return 0;
}

void solve(){
	int n, t; // t are number of products
	cin>>n>>t;

	vector<int>a(n);

	for(int i=0; i<n; i++) cin>>a[i];

	int lo=0;
	int hi=1e18;
	int ans=-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(check(a, mid, t)){
			ans=mid;
			hi=mid-1;
		}else lo=mid+1;
	}

	cout<<ans<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t=1;
	// cin>>t;

	while(t--) solve();

	return 0;

}