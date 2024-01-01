/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>


//----------------------- MACRO START ---------------------------

#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define int long long

#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

#define sum(a) accumulate(a.begin(), a.end(), 0LL)
#define srt(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define maxi(a) *max_element(a.begin(), a.end())
#define mini(a) *min_element(a.begin(), a.end())

#define direc_4 vector<vector<int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}
#define direc_8 vector<vector<int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}}

//----------------------- MACRO END ---------------------------

using namespace std;

void solve(){

	int n; cin>>n;

	vector<vector<string>>a(n);

	for(int i=0; i<n; i++){
		string x,y; cin>>x>>y;
		a[i].pb(x);
		a[i].pb(y);
	}

	map<string, int>mp;
	map<string, string>mp2;

	for(int i=0; i<n; i++){
		string st,ed;
		st=a[i][0];
		ed=a[i][1];

		mp2[st]=ed;

		if(mp.find(st)==mp.end()) mp[st]=1;
		mp[ed]=0;
	}

	string st="";

	for(auto i: mp){
		if(i.ss) st=i.ff;
	}

	// cout<<st;


	while(mp2.find(st)!=mp2.end()){
		cout<<st<<" ";
		st=mp2[st];
	}
	cout<<st;

	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--) solve();

	return 0;

}