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
	string s; cin>>s;

	int i=0, j=0, n=s.size(), ans=n, k=0, cnt=0;

	vector<int> fq(256, 0);

	for(char i: s){	
		fq[i]++;
		if(fq[i]==1) k++;
	}

	for(int i=0; i<256; i++) fq[i]=0;

	while(j<n){
		fq[s[j]]++;

		if(fq[s[j]]==1) cnt++;

		while(i<=j && cnt==k){
			// cout<<(j-i+1)<<" ";
			ans= min(ans, (j-i+1));
			fq[s[i]]--;
			if(fq[s[i]]==0) cnt--;
			i++;
		}

		j++;
	}

	cout<<ans;

}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// cout<<solve();
	solve();

	return 0;

}