/*

Build | ..... | Peace

*/ 

#include<bits/stdc++.h>

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

int n, k;
vector<int>a;

int check(int mx){
	int i=1;
	int placed=0;

	for(;i<n;i++){
		int dis= a[i]-a[i-1];

		int rq= (((dis+mx-1)/mx)-1);

		placed+=rq;
	}

	return placed<=k;
}

void solve(){
	cin>>n>>k;

	a.resize(n);

	for(auto &i:a)cin>>i;

	int lo=1;
	int hi=1e18;
	int ans=hi;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(check(mid)){
			ans=mid;
			hi=mid-1;
		}else lo=mid+1;
	}

	cout<<ans<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif

	int t;
	cin>>t;

	while(t--) solve();

	return 0;

}