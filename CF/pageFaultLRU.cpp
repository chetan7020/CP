/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

int solve(){
	int n; cin>>n;
	vector<int> arr(n);
	fore(i, 0, n) cin>>arr[i];
	int s; cin>>s;

	deque<int> dq;
	map<int, int> mp;

	int ans=0;

	fore(i, 0, n){

		if(mp[arr[i]]<=0) ans++;

		dq.push_front(arr[i]);
		mp[arr[i]]++;

		if(dq.size()>=s){
			mp[arr[i]]--;
			dq.pop_back();
		}

	}

	return ans;
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<solve()<<endl;
	}

	return 0;

}