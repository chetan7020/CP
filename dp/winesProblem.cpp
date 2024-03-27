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
/*
5
3 4 5 7 6

*/

int computeMaxProfit(int i, int j, int multiple, vector<int>&prices){

	if(i>j){
		return 0;
	}

	if(i==j){
		return prices[i]*multiple;
	}

	int ans=-1e9;

	ans=max(ans, ((prices[i]*multiple)+computeMaxProfit(i+1, j, multiple+1, prices)));
	ans=max(ans, ((prices[j]*multiple)+computeMaxProfit(i, j-1, multiple+1, prices)));

	return ans;
}

void solve(){
	int n; cin>>n;

	vector<int>prices(n);

	for(int &i:prices)cin>>i;

	int i=0, j=n-1, multiple=1;

	cout<<computeMaxProfit(i, j, multiple, prices);

	cout<<endl;
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