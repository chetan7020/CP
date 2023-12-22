/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define f first
#define s second
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

int solve(){
    int n; cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int ans = 0;
    vector<int> pre(n);
    pre[0]=a[0];

    for(int i=1; i<n; i++){
        pre[i]= pre[i-1]+a[i];
    }

    int i=1;

    while(i<n){
        if(n%i!=0){
            i+=1;
            continue;
        }

        vector<int> num;

        int j=0, maxi=LLONG_MIN, mini=LLONG_MAX;
        while(j<n){

            int t= pre[j+i-1];
            if(j-1>=0) t-=pre[j-1];

            num.push_back(t);
            maxi= max(maxi, t);
            mini= min(mini, t);
            j+=i;
        }

        int val= abs(maxi- mini);
        ans= max(ans, val);
        i+=1;
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