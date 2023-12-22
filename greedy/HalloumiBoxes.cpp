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

bool isSorted(vector<int> &a, vector<int> &b, int n){
	for(int i=0; i<n; i++){
		if(a[i]!=b[i]) return false;
	}

	return true;
}

void solve(){
	int n, k; cin>>n>>k;

	vector<int> a(n), b(n);
	for(int i=0; i<n;i++) cin>>a[i], b[i]=a[i];

	// sort(b.begin(), b.end());

	if(k==1){
		if(is_sorted(a.begin(), a.end())){
			cout<<"YES"<<endl;
			return;
		}
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;

}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--) solve();

	return 0;

}