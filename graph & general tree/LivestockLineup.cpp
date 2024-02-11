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

	vector<string> cw= {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};

	srt(cw);

	map<string, int> mp;

	for(int i=0; i<8; i++){
		mp[cw[i]]=i;
		cout<<cw[i]<<endl;
	}

	vector<vector<string>> adj(7);

	// int n; cin>>n;

	// for(int i=0; i<n; i++){
	// 	string cw1, cw2, trash; cin>>cw1>>trash>>trash>>trash>>trash>>cw2;

	// 	adj[cw1].pb(cw2);
	// 	adj[cw2].pb(cw1);
	// }




	// int v, e; cin>>v>>e;

	// vector<vector<int>>adj(v);

	// for(int i=0; i<e; i++){
	// 	int a, b; cin>>a>>b;
	// 	adj[a].pb(b);
	// 	adj[b].pb(a);
	// }



	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


    int n, k; cin>>n>>k;

    vector<int>a(n);

    for(int i=0; i<n; i++)cin>>a[i];

    srt(a);

	int cur=0, ans=0;

	for(int i=0; i<n && cur+a[i]<=k; i++){
		cur+=a[i];
		ans++;
	}

	cout<<ans;

	//3 3 4 4 7 8

	// int t;
	// cin>>t;

	// while(t--) solve();

	return 0;

}