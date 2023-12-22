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
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int>a(n), b(n);

	fore(i,0,n) cin>>a[i];
	fore(i,0,n) cin>>b[i];

	vector<pair<pair<int,int>,int>> c;
	fore(i,0,n) c.pb({{b[i], a[i]}, i+1});

	srt(c);

	// for(auto i: c) cout<<i.ff.ff<<" "<<i.ff.ss<<" "<<i.ss<<endl;
	
	int finish_time=c[0].ff.ff;
	cout<<c[0].ss<<" ";

	fore(i,1,n){
		int curr_start_time = c[i].ff.ss;
		if(curr_start_time>finish_time){
			cout<<c[i].ss<<" ";
			finish_time=c[i].ff.ff;
		}
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