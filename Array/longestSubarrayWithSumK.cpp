/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>


//----------------------- MACRO START ---------------------------

#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define int long long

#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

#define sum(a) accumulate(a.begin(), a.end(), 0LL)
#define srt(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define maxi(a) *max_element(a.begin(), a.end())
#define mini(a) *min_element(a.begin(), a.end())

#define direc_4 vector<pair<int,int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}
#define direc_8 vector<pair<int,int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}}

#define SEIVE(n, sv) \
    sv[0] = sv[1] = 0; \
    for (int i = 2; i <= n; i++) { \
        if (sv[i] == 0) continue; \
        for (int j = i * i; j <= n; j += i) { \
            sv[j] = 0; \
        } \
    }

//----------------------- MACRO END ---------------------------

using namespace std;

void solve(){
	vector<int>a={1,1,2,0,4};
	int n= 5, k=2;

	int ans=0;

	vector<int>pre(n, 0);

	for(int i=0;i<n;i++){
		pre[i]=a[i];
		if(i){
			pre[i]+=pre[i-1];
		}
	}

	map<int,int>mp;

	mp[0]=-1;

	for(int i=0;i<n;i++){
		if(mp.find(pre[i]-k)!=mp.end()) ans=max(ans, (i-mp[pre[i]-k]));
		if(mp.find(pre[i])==mp.end()) mp[pre[i]]=i;
	}

	cout<<ans<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


	int t=1;
	// cin>>t;

	while(t--) solve();

	return 0;

}