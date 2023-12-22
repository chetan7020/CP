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

int idx(vector<int>&a, int n, int k){
	int lo=0;
	int hi=n-1;
	int ans=-1;

	while(lo<=hi){
		int mid=lo+(hi-lo)/2;

		if(a[mid]>=k){
			ans=mid;
			hi=mid-1;
		}else lo=mid+1;
	}

	return ans;
}

void solve(){

// 1 9 12 23 26 37sB
// 0 10 25 37



	int n, m; cin>>n>>m;

	vector<int> a(n), b(m);

	fore(i, 0, n) cin>>a[i];

	fore(i, 0, m) cin>>b[i];

	fore(i, 1, n) a[i]+=a[i-1];

	// for(int i: a) cout<<i<<" ";

	// cout<<endl;

	fore(i, 0, m){
		int index= idx(a, n, b[i]);

		if(index){
			cout<<index+1<<" "<<abs(a[index-1]- b[i]);
		}else cout<<1<<" "<<b[i];
		cout<<endl;
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