/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

void help_classmate(vector<int> a, int n){ 
    stack<int> st;
    
    vector<int> ans(n);
    
    for(int i=n-1; i>=0; i--){
        
        while(!st.empty() && a[st.top()]>=a[i]) st.pop();
        
        if(st.empty()) ans[i]= -1;
        else ans[i]= a[st.top()];
        
        st.push(i);
        
    }
    
    return ans;

    for(int i: ans) cout<<i<<" ";
} 

void solve(){
	int n; cin>>n;

	vector<int> a(n);

	for(int i=0; i<n; i++) cin>>a[i];

	help_classmate(a, n);
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}