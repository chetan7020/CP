/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

int solve(){
    int n, k;
    cin>>n>>k;
    
    vector<int> arr(n), preSum(n);
    vector<pair<int, int>> power(k);

    for(int i=0; i<n; i++){
        cin>>arr[i];   
    }

    for(int i=0; i<k; i++){
        pair<int, int> temp;
        temp.first = i;
        cin>>temp.second;   
        power[i]=temp;
    }

    preSum[0] = arr[0];

    for(int i=1; i<n; i++){
        preSum[i] = preSum[i-1]+arr[i];
    }

    sort(power.begin(), power.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    int ans = 0;

    for(int i=0; i<(k/2); i++){

        if(power[i].second>0) ans+= (preSum[power[k-i-1].second] - preSum[power[i].second-1]);
        else ans+= preSum[power[k-i-1].second];

    }

    return ans;

}

int main(){

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