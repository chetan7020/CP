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

int cnt(vector<int> &a, int n, int k){

	int i=0, j=0, sm=0, ans=0;

	while(j<n){
		sm+=a[j];
		while(i<=j && sm>k) sm-=a[i++];
		ans+=(j-i+1);
		j++;
	}

	return ans;
}

void solve(){
	int n, k; cin>>n>>k;

	vector<int> a(n);

	fore(i, 0, n) cin>>a[i];

	cout<<cnt(a, n, k)-cnt(a, n, k-1);
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

	return 0;

}