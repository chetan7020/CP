/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)


using namespace std;

int solve(){
	string s; cin>>s;

	int o1=0, o2=0, moves=0, n=s.size();

	fore(i, 0, n){
		if(s[i]=='(') o1++;
		if(s[i]=='[') o2++;
		if(s[i]==')'){
			if(o1>=1){
				moves++;
				o1--;
			}
		}
		if(s[i]==']'){
			if(o2>=1){
				moves++;
				o2--;
			}
		}
	}

	return moves;
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<solve()<<endl;
	}

	return 0;

}