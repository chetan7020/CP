/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define pb push_back

using namespace std;

void solve(){

	//stk = 100 80 70
	//ans = 1 1 1 2

	int arr[] = {100, 80, 60, 70, 60, 75, 85};

	// ans = 0-(-1) 1-0 2-1 3-1 4-3 5-1 6-0
	// ans = 1 1 1 2 1 4 6

	int n=7;

	stack<int> stk;
	vector<int> ans;

	for(int i=(n-1); i>=0; i--){


		if(stk.empty()) ans.pb(-1);
		else if(!stk.empty() && stk.top()>arr[i]) ans.push_back(stk.top());
		else{
			while(!stk.empty() && stk.top()<=arr[i]){
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