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



int check(int a, int b, int c, int mid){
	int i=1;

	while(i<=mid){

		if(a==-1 || b==-1 || c==-1) return 0;

		if(a==0 && b==0 && c==0) return 1;

		if(i%7==0){
			a-=1;
			b-=1;
			c-=1;
		}else{
			if(a){
				a-=1;
			}else if(b){
				b-=1;
			}else if(c){
				c-=1;
			}
		}
	}

	if(a==0 && b==0 && c==0) return 1;

	return 0;
}

void solve(){
	int a,b,c; cin>>a>>b>>c;

	int lo=1;
	int hi=1e9;
	int ans=-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(check(a,b,c,mid)){
			ans=mid;
			hi=mid-1;
			break;
		}else lo=mid+1;
	}

	if(ans==-1){
		cout<<"NO"<<endl;
		return;
	}

	cout<<"YES";

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