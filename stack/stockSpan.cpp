/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define pb push_back

using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr.push_back(ele);
	}

	stack<int> stk;
	vector<int> ans;

	for(int i=0; i<n; i++){
		while(!stk.empty() && arr[stk.top()]<=arr[i]){
			stk.pop();
		}
		
		if(stk.empty()) ans.pb(-1);
		else ans.push_back(stk.top());

		stk.push(i);
	}

	for(int i=0; i<n; i++) ans[i] = i-ans[i];

	for(auto i:ans){
		cout<<i<<" ";
	}
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	// cin>>t;

	t=1;

	while(t--){
		solve();
	}

	return 0;

}