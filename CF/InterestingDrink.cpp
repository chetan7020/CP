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

int idx(vector<int> &a, int n, int k){
	int lo=0;
	int hi=n-1;
	int ans=n;

	while(lo<=hi){
		int mid=lo+(hi-lo)/2;

		if(a[mid]>k){
			ans=mid;
			hi=mid-1;
		}else lo=mid+1;
	}

	return ans;
}

void solve(){
	int n; cin>>n;

	vector<int> a(n);

	// vector<int> fq(100001, 0);

	fore(i, 0, n){
		// int ele; cin>>ele;

		// fq[ele]++;
		cin>>a[i];
	}

	// for(int i=1; i<100001; i++) fq[i]+=fq[i-1];

	sort(a.begin(), a.end());

	int q; cin>>q;

	while(q--){
		int k; cin>>k;
		cout<<idx(a,n,k)<<endl;
	}
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}