/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define pb push_back

using namespace std;

void solve(){


	int arr[] = {4 ,7, 8, 2 ,3 ,1};

	int n=7;

	stack<int> stk;
	vector<int> ans;

	for(int i=(n-1); i>=0; i--){

		if(stk.empty()) ans.pb(-1);
		else if(!stk.empty() && stk.top()<=arr[i]) ans.push_back(stk.top());
		else{
			while(!stk.empty() && stk.top()>arr[i]){
				stk.pop();
			}
			
			if(stk.empty()) ans.pb(-1);
			else ans.push_back(stk.top());
		} 
		stk.push(arr[i]);
	}

	reverse(ans.begin(), ans.end());

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