/*

Build | ..... | Peace


4 10
7 2 3 9

2 3 7 9

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

// int bs(vector<int>a, int n, int k, int lo){
// 	// int lo=0;
// 	int hi=n-1;
// 	int ans=-1;
	
// 	while(lo<=hi){
// 		int mid=lo+(hi-lo)/2;
	
// 		if(check(/*paras*/)){
// 			ans=mid;
// 			lo=mid+1;
// 		}else hi=mid-1;
// 	}
// }

void solve(){
	int n,m; cin>>n>>m;

	vector<int> a(n);
	vector<int> b(m);

	multiset<int, greater<int>> ms;

	fore(i,0,n){
		cin>>a[i];
		ms.insert(a[i]);
	}
	fore(i,0,m) cin>>b[i];

	srt(a);

	// for(int i: a) cout<<i<<" ";

	// cout<<endl;

	fore(i,0,m){
		auto it= ms.lower_bound(b[i]);

		if(it==ms.end()) cout<<-1;
		else{
			cout<<*it;
			ms.erase(it);
		}

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