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

int firstAtRight(vector<int> &b, int k, int n){
	int lo= 0, hi=n-1;
	int ans= n;

	while(lo<=hi){
		int mid = lo + (hi-lo)/2;

		if(b[mid]>=k){
			hi= mid-1;
			ans= mid;
		}else lo= mid+1;
	}

	return ans;

}

void solve(){
	int n, m; cin>>n>>m;

	vector<int> a(n), b(m);

	fore(i, 0, n) cin>>a[i];

	fore(i, 0, m) cin>>b[i];

	int minPossibleR= 0;

	for(int i=0; i<n; i++){
		int rightMin= firstAtRight(b, a[i], m);
		int leftMin= rightMin-1;

		// cout<<leftMin<<" "<<rightMin<<endl;

		int minRForThisCity = 2e9;

		if(rightMin<m) minRForThisCity = min(minRForThisCity, abs(b[rightMin]- a[i]));
		if(leftMin>=0) minRForThisCity = min(minRForThisCity, abs(b[leftMin]- a[i]));

		minPossibleR= max(minPossibleR, minRForThisCity);
	}

	cout<<minPossibleR;
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// int t; cin>>t;
	// while(t--) solve();
	solve();
	
	return 0;

}