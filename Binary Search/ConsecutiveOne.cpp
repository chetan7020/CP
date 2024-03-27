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

int n, k;
vector<int>a;

int f(int sz){
	int i=0,j=0,cnt=0;

	int f=0;

	while(j<n){
		cnt+=(a[j]==0);

		if((j-i+1)==sz){
			// cout<<cnt<<" ";
			if(cnt<=k) f=1;
			cnt-=(a[i++]==0);
		}

		j++;
	}

	return f;
}

void solve(){

	cin>>n>>k;

	a.resize(n);

	for(int i=0;i<n;i++)cin>>a[i];


	// cout<<f(5);
	int lo=0;
	int hi=n;
	int ans=-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(f(mid)){
			ans=mid;
			lo=mid+1;
		}else hi=mid-1;
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