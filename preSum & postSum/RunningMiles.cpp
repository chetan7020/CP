/*

Build | ..... | Peace 

cpy mat kar bc

we have to select 3 elements from b which falls between range l to r
such that sm of a+b+c-(r-l) is maximized

a+l + b + c-r

we can say that if we select l (a) as starting of segement and r (c)as end 
of the segment bz it will be most optimal choice

so now it only requires to select b

so from each valid i we have to choice maximum of [ a+l + b + c-r ]

where a+l is max a+l from 0-(i-1)
c-r is max c-r from i+1 to n-1

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

// #define debug(x) cerr << #x << " " << x <<endl;

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
	int n; cin>>n;

	vector<int> a(n), premx(n+1, INT_MIN), suffmx(n+1, INT_MIN);

	for(int &i:a)cin>>i;

	for(int i=1;i<=n;i++){
		premx[i]= max(premx[i-1], a[i-1]+i-1);

		// cout<<premx[i]<<" ";
	}

	for(int i=n-1;i>=0;i--){
		suffmx[i]= max(suffmx[i+1], a[i]-i);
	}

	int ans=INT_MIN;

	for(int i=1; i<n-1;i++) ans=max(ans, a[i]+premx[i]+suffmx[i+1]);

	cout<<ans<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
    freopen("D://CP//Codes//error.txt", "w", stderr);
#endif


	int t;
	cin>>t;

	while(t--) solve();

	return 0;

}