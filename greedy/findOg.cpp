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

	fore(i,0,n) cin>>a[i];

	vector<int> ans;

    multiset<int>ms;

    for(int i=0; i<n; i++) ms.insert(a[i]);

    for(int i=0; i<n; i++){
        auto it= ms.lower_bound(a[i]*2);
        if(it!=ms.end()){
        	if(*it==0) continue;
        	ms.erase(*it);
        	ms.erase(a[i]);
        	ans.pb(a[i]);
        }
    }

    if(ms.count(0)%2==0){
    	for(int i=0; i<ms.count(0)/2; i++) ans.pb(0);
    	// cout<<ms.count(0)<<endl;
    	ms.erase(0);
    }
	
	if(ms.empty()){
		for(int i: ans) cout<<i<<" ";
	}else cout<<"NA";

	cout<<endl;

}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


    int t; cin>>t;
    while(t--)solve();

	return 0;

}