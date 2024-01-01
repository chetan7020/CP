/*

Build | ..... | Peace

cpy mat kar bc

https://codeforces.com/problemset/problem/1907/D

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

bool check(vector<pair<int, int>> &a, int n, int k){

	int x=0, y=0;

	for(int i=0; i<n; i++){
		x= max(a[i].first, x-k);
		y= min(a[i].second, y+k);

		if(x>y) return false;
	}

	return true;
}

int solve(){
	int n; cin>>n;

	vector<pair<int, int>> a;

	for(int i=0; i<n; i++){
		int x, y; cin>>x>>y;
		a.push_back({x,y});
	}

	int lo=0;
	int hi=1e9;
	int ans=-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(check(a, n, mid)){
			ans=mid;
			hi=mid-1;
		}else lo=mid+1;
	}

	return ans;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<solve()<<endl;
	}

	return 0;

}