/*

Build | ..... | Peace

cpy mat kar bc

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

	int ans= 4;

	for(int i=0; i<n; i++){

		if(i){
			if(s[i]-'0'==0) ans+=abs(10-(s[i-1]-'0'));
			else ans+= ((s[i]-'0')-1);	
		}else{
			if(s[i]-'0'==0) ans+=(10-1);
			else ans+= ((s[i]-'0')-1);
		}


	}

	return ans;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<solve()<<endl;
	}

	return 0;

}