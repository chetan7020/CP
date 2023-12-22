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

void solve(){
	int n; cin>>n;

	n=2*n;

	vector<int> a(n);

	for(int i=0; i<n; i++) cin>>a[i];

	sort(a.begin(), a.end());

	int i=1, j=n-2;

	int dis=0;

	while(i<j){
		dis+= (a[j+1]-a[j]) + (a[i]-a[i-1]);
		i++;
		j--;
	}	

	i=0, j=n-1;

	cout<<dis<<endl;

	while(i<j){
		cout<<a[i++]<<" "<<a[j--]<<endl;
	}
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