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

void solve(){
	int n; cin>>n;

	vector<int> a(n);

	fore(i, 0, n) cin>>a[i];

	stack<int> st;

	for(int i=0; i<n; i++){
		while(!st.empty() && a[st.top()]>=a[i]) st.pop();

		if(st.empty()) cout<<0<<" ";
		else cout<<st.top()+1<<" ";

		st.push(i);
	}

}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

	return 0;

}