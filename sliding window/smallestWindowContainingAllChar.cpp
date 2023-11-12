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

string solve(){
	string s, p; cin>>s>>p;

	vector<int> a(26, 0);
    int cnt=0, i=0, j=0, n=s.size(), l=-1, r=-1;

    for(char i: p){
    	// mp[i]++;
    	a[i-'a']++;
    	if(a[i-'a']==1) cnt++;
    }

    while(j<n){
    	a[s[j]-'a']--;
    	if(a[s[j]-'a']==0) cnt--;

    	while(cnt==0){
    		if( (l==-1 && r==-1) || ((r-l)>(j-i)) ){
    			l=i;
    			r=j;
    		}

	    	a[s[i]-'a']++;
	    	if(a[s[i]-'a']==1) cnt++;
	    	i++;
    	}

    	j++;
    }

    if(l==-1 && r==-1) return "-1";

    string ans="";

    for(int i=l; i<=r; i++) ans+=s[i];

    return ans;
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	cout<<solve();

	return 0;

}