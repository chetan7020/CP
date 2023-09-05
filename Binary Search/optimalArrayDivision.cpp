/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

bool check(vector<int> &arr, int k, int mid){
    int cnt=1; int sum=0;
    
    for(int i:arr){

    	if(i>mid) return false;

        if((sum+i)>mid){
            cnt++;
            sum=i;
        }else sum+=i;
    }

    return cnt<=k;
}

void solve(){

	int n, k;

	cin>>n>>k;

	vector<int> arr(n);

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	if(k>n){
		cout<<-1;
		return;
	}

	int lo=*max_element(arr.begin(), arr.end());;
	int hi=accumulate(arr.begin(), arr.end(), 0);
	int ans=-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(check(arr, k, mid)){
			// cout<<mid<<endl;
			ans=mid;
			hi=mid-1;
		}else lo=mid+1;
	}

	cout<<ans;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

	return 0;

}