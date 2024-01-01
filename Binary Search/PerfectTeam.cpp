/*

Build | ..... | Peace

cpy mat kar bc


*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define int long long
#define srt(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)
#define sum(a) accumulate(a.begin(), a.end(), 0LL)
#define maxi(a) *max_element(a.begin(), a.end())
#define mini(a) *min_element(a.begin(), a.end())

using namespace std;

int check(int c, int m, int x, int n){

	if((c+m+x-n-n)>=n) return 1;
	return 0;

	// if(c>=n && m>=(2*n)) return 1;

	// if(m>=n && c>=(2*n)) return 1;

	// if(c>=n && m>=n && x>=n) return 1;

	// n-=x;
	// c-=x;
	// m-=x;
	// x=0;

	// if(n==0) return 1;

	// if(c<0 || m<0) return 0;



	// return 0;
}

void solve(){
	int c,m,x; cin>>c>>m>>x;

	int lo=0;
	int hi=min(c,m);
	int ans=-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(check(c,m,x,mid)){
			ans=mid;
			lo=mid+1;
		}else hi=mid-1;
	}

	cout<<ans;

	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--) solve();

	return 0;

}