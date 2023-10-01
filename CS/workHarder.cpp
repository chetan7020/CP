/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define for(i, a, b) for(int i = (a); i < (b); i++)


using namespace std;

int solve(){
	int a, b, c;
	cin>>a>>b>>c;

	int ans = -1;

	int tt = ceil((double)a/b);
	int ht = ceil((double)a/c);

	// cout<<tt<<" "<<ht<<endl;

	if(tt==ht) return ans;

	ans = tt-(ht+1);

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