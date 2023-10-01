/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

int solve(){
	int n, h, ans = 0, maxi=INT_MIN, s_maxi=INT_MIN;
    
    cin>>n>>h;
    

    vector<int> arr(n);
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if (arr[i] > maxi) {
            s_maxi = maxi;
            maxi = arr[i];
        } else if (arr[i] > s_maxi && arr[i] != maxi) {
            s_maxi = arr[i];
        }
    }

    for(int i=0; i<n; i++){

    }
    
    
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