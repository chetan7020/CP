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
	int n; cin>>n;
	vector<int>a(n);

	for(int i=0;i<n;i++) cin>>a[i];

    int nd=0;
    
    set<int>st;
    for(int i:a)st.insert(i);
    
    nd=st.size();
    
    int i=0,j=0,curr=0;
    
    int curr_sm=0, ans=INT_MAX;
    
    map<int,int>mp;

    int start=-1;
    
    while(j<n){
        mp[a[j]]++;
        if(mp[a[j]]==1) curr++;
        curr_sm+=a[j];
        
        while(curr==nd){
            ans=min(ans, curr_sm);
        	
            mp[a[i]]--;
            if(mp[a[i]]==0) curr--;
            curr_sm-=a[i];
            
            i++;
        }
        
        j++;
    }
    
    cout<<ans;

	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


	int t=1;
	// cin>>t;

	while(t--) solve();

	return 0;

}