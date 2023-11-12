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
	int k;
	cin>>k;

	vector<int> fq(26, 0);

	int i=0, j=0, n=s.size(), cnt=0;
	long long ans=0;

	while(j<n){
		fq[s[j]-'a']++;
		if(fq[s[j]-'a']==1) cnt++;

		while(i<=j && cnt>k){
			fq[s[i]-'a']--;
			if(fq[s[i]-'a']==0) cnt--;
			i++;
		}

		ans+=(j-i+1);

		j++;
	}


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