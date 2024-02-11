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

#define direc_4 vector<vector<int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}
#define direc_8 vector<vector<int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}}

//----------------------- MACRO END ---------------------------

using namespace std;

//----------------------- FUNCTION START ---------------------------

// 1-> prime
// 0-> not prime
//pass vector of sz = n initialized with 1
void seive(int n, vector<int>&sv){ 
	sv[0]=sv[1]=0;

	for(int i=2; i<=n; i++){
		if(sv[i]==0) continue;

		for(int j=i*i; j<=n; j+=i){
			sv[j]=0;
		}
	}
}

//----------------------- FUNCTION END ---------------------------
int f(vector<vector<int>> &dp, vector<int>&a, int k, int sm, int lvl, int n){
	if(sm>k) return 0;

	if(sm==k) return 1;

	if(lvl==n-1) return a[lvl]+sm==k;

	int ans= 0;
	if(f(dp, a, k, sm, lvl+1, n)==1) ans=1;
	if(f(dp, a, k, sm+a[lvl], lvl+1, n)==1) ans=1;

	return ans;
}

void solve(){
	int n,x,z; cin>>n>>x>>z;

	vector<int>a(n);

	for(int i=0;i<n;i++) cin>>a[i];

	if(z%x==0){
		cout<<(z/x)<<endl;
		return;
	}


	int earned= (x*(floor(z/x)+1));

	int k=(earned-z);

	vector<vector<int>> dp(n, vector<int>(k+1, -1));

	if(f(dp, a, k, 0, 0, n)==1) cout<<(floor(z/x)+1);
	else cout<<"-1";

	// cout<<earned<<" "<<k<<endl;
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