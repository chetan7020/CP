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

void solve(){

	int n, k; cin>>n>>k;

	vector<int>a(n), freq(k);

	for(int i=0; i<n; i++){
		cin>>a[i];
		cout<<(a[i]%k)<<" ";
		freq[a[i]%k]++;
	}

	cout<<endl;

	for(int i=0; i<k; i++) cout<<i<<" "<<freq[i]<<endl;

	int ans=(freq[0]*(freq[0]-1)/2);

	// cout<<ans<<endl;

	// cout<<(k/2);


	if(k%2){
		for(int i=1; i<=(k/2); i++){
			// cout<<"i : "<<i<<endl;
			ans+=(freq[i]*freq[k-i]);
		}
	}else{
		for(int i=1; i<(k/2); i++){
			// cout<<"i : "<<i<<endl;
			ans+=(freq[i]*freq[k-i]);
		}
		ans+=(freq[k/2]*(freq[k/2]-1)/2);
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