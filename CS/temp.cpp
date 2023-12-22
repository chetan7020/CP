#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

void solve(){
	int n; cin>>n;
    vector<int> a(n);
    
    for(int i=0; i<n; i++) cin>> a[i];

    vector<int> b(n+1, 0);
    int z=0;
    
    for(int i=1; i<=n; i++) b[i]= a[i-1], z = max(b[i], z);

    set<int> st;
    for (int i = 1; i <= n; ++i) {
        if (st.find(b[i]) != st.end()) {
            cout << z << " ";
        } else {
            cout << b[i] << " ";
        }
        st.insert(b[i]);
    }
    cout << endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    int t; cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
