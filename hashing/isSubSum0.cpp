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
	int n; cin>>n;
	vector<int>a(n);

	for(int i=0;i<n;i++) cin>>a[i];

	map<int,int> mp;

	int sm=0;

	bool flag=false;

	for(int i=0;i<n;i++){
        sm+=a[i];
        if(sm==0){
        	flag=true;
        	break;
        }
        if(mp.find(sm)!=mp.end()){
        	flag=true;
        	break;
        }
        mp[sm]++;
	}

	if(flag) cout<<"YES";
	else cout<<"NO";
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}