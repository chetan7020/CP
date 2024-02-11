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

int check(int k, vector<int>&a, int c, int d){
	int n=a.size();
	int taken_c=0;
	for(int i=0;i<d;i++){
		if((i%k)<n)taken_c+=a[i%k];
	}
	return (taken_c>=c);
}

void solve(){
	int n,c,d; cin>>n>>c>>d;

	vector<int>a(n);

	for(int i=0;i<n;i++) cin>>a[i];

	srt(a);
	rev(a);

	int lo=1;
	int hi=1e9;
	int ans=-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(check(mid, a, c, d)==1){
			ans=mid;
			lo=mid+1;
		}else hi=mid-1;
	}

	if(ans==-1){
		cout<<"Impossible"<<endl;
		return;
	}

	if(ans>=d){
		cout<<"Infinity"<<endl;
		return;
	}

	cout<<ans-1<<endl;
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