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

void solve(){
	int n; cin>>n;

	vector<int>a(n);

	int o=0, e=0, sm=0, r;

	for(int i=0; i<n; i++){

		cin>>a[i];
		
		sm+=a[i];

		o+=(a[i]%2==1);
		e+=(a[i]%2==0);

		r=o/3;

		if(e==0 && o==1) r=0;
		else if(o%3==1) r=(o+2)/3;
		cout<<sm-r<<" ";
	}

	cout<<endl;
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