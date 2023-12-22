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
	int n; cin>>n;

	string s; cin>>s;

	int i=0, j=n-1;

	while(i<j){
		if((s[i]=='0' && s[j]=='1') || (s[j]=='0' && s[i]=='1')){
			i++;
			j--;
			n-=2;
		}else break;
	}

	return n;
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