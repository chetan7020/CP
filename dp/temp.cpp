/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long


using namespace std;

char solve(){
    map<char, int> mp;

    string s; getline(cin, s);

    int maxi = INT_MIN;

    for(char i: s){
        if(isalpha(i)){
            mp[i]++;
            if(i>=(int)'a' && i<=(int)'g') maxi = max(maxi, mp[i]);
        }
    }

    vector<char> vMaxi;

    char ans = 'Z';

    for(auto i: mp){
        // cout<<i.first<<" "<<i.second<<endl;
        if((i.second==maxi) && (i.second>=(int)'a' && i.second<=(int)'g')) {ans = toupper(i); break;}
    }

    return ans;

    // return 'Z';


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