/*

Build | ..... | Peace

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

int check(vector<int>&a, int n, int k, int mx){

	int sm=0;
	int div=0;
	for(int i=0;i<n;i++){
		if(a[i]>mx) return false;
		if(a[i]+sm>mx){
			sm=a[i];
			div++;
		}else sm+=a[i];
	}

	if(sm>0)div++;

	// cout<<div;

	return div<=k;
}

void solve(){
	int n, k; cin>>n>>k;

	vector<int>a(n);

	for(auto &i:a)cin>>i;

	int lo=1;
	int hi=sum(a);
	int ans=-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;

		int f=check(a, n, k, mid);

		if(f){
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

	solve();

	return 0;

}