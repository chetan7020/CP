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

void solve(){
	int n,m; cin>>n>>m;

	int md=998244353;

	if(n==2 && m==2){
		cout<<9<<endl;
		return;
	}

	if(n==m){
		if(n%2){
			cout<<((n/2)*(n/2))<<endl;
			return;
		}else{
			int x=n/2;

			int ans=0;

			for(int i=x; i<=x+1; i++){
				for(int j=x; j<=x+1; j++){
					ans+= ((i*j)%md);
					ans%=md;
				}
			}
		}
	}else{
		// if((n%2 && m%2==0) || (n%2==0 && m%2)){
		if(n%2){
			int i= (n/2)+1;
			
			int k;

			if(m<=i) k=n/2;
			else k=m-1;

			int ans=0;

			for(int j=1; j<=k; j++){
				ans+= ((i*j)%md);
				ans%=md;
				// cout<<i<<" "<<j<<endl;
			}

			cout<<ans<<endl;

		}else{
			int i= (n/2)+1;
			
			int k;

			if(m<=i) k=n/2;
			else k=m-1;

			int ans=0;

			for(int j=1; j<=k; j++){
				ans+= ((i*j)%md);
				ans%=md;
				// cout<<i<<" "<<j<<endl;
			}

			cout<<ans<<endl;
		}
		// }
	}
	
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