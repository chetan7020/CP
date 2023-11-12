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
	vector<int> arr(n);

	fore(i, 0, n) cin>>arr[i];

	stack<int> st;

	vector<int> arrRight(n), arrLeft(n);

	for(int i=0; i<n; i++){
		while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();

		if(st.empty()) arrLeft[i]= -1;
		else arrLeft[i]= st.top();

		st.push(i);
	}

	while(st.empty()) st.pop();

	for(int i=(n-1); i>=0; i--){
		while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();

		if(st.empty()) arrRight[i]= -1;
		else arrRight[i]= st.top();

		st.push(i);
	}
	for(int i: arrRight) cout<<i<<" ";

	cout<<endl;

	for(int i: arrLeft) cout<<i<<" ";

	vector<int> ans(n);

	for(int i=0; i<n; i++){
		if(arrLeft[i]==-1 || arrRight[i]==-1){
			ans[i]= max(arrRight[i], arrLeft[i]);
		}else{
			
			// if(arr[arrLeft[i]]==arr[arrRight[i]]){
			// 	ans[i]= min(arrRight[i], arrLeft[i]);
			// }else{
			// 	if(arr[arrLeft[i]]>arr[arrRight[i]]){
			// 		ans[i]= arrRight[i];
			// 	}else ans[i]= arrLeft[i];
			// }
		}
	}

	cout<<endl;

	for(int i: ans) cout<<i<<" ";
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// int t;
	// cin>>t;

	// while(t--){
	// 	cout<<solve()<<endl;
	// }

	solve();

	return 0;

}