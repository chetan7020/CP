/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> arr(n);

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr[i]=ele;
	}
  	stack<int> lse, rse;
	vector<int> lseArr(n), rseArr(n);

	for(int i=0; i<n; i++){
		while(!lse.empty() && arr[lse.top()]>=arr[i]) lse.pop();
		if(lse.empty()) lseArr[i]=n;
		else lseArr[i]=lse.top();
		lse.push(i);

		while(!rse.empty() && arr[rse.top()]>=arr[n-i-1]) rse.pop();
		if(rse.empty()) rseArr[n-i-1]=n;
		else rseArr[n-i-1]=rse.top();
		rse.push(n-i-1);
	}

	cout<<"arr : ";
	for(auto i:arr){
		cout<<i<<" ";
	}

	cout<<endl<<"lseArr : ";
	for(auto i: lseArr){
		if(i!=n) cout<<arr[i]<<" : "<<i<<" "<<endl;
		else cout<<i<<" "<<endl;
	}


	cout<<endl<<"rseArr : ";
	for(auto i: rseArr){
		if(i!=n) cout<<arr[i]<<" : "<<i<<" "<<endl;
		else cout<<i<<" "<<endl;
	}

	vector<int> ans(n);

	for(int i=0; i<n; i++){
		if(lseArr[i]==n && rseArr[i]==n) ans[i]=-1;
		else {
			if(lseArr[i]==n || rseArr[i]==n){
				if(lseArr[i]!=n) ans[i]=lseArr[i];
				if(rseArr[i]!=n) ans[i]=rseArr[i];
			}else{
				if(arr[lseArr[i]]!=arr[rseArr[i]]) {
					if(arr[lseArr[i]]<arr[rseArr[i]]){
						ans[i]=lseArr[i];
					}else ans[i]=rseArr[i];
				}else ans[i]=min(lseArr[i], rseArr[i]);
			}
		}
	}

	cout<<endl<<"ans : ";
	for(auto i: ans){
		cout<<i<<" ";
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
		solve();

		cout<<endl;
	}

	return 0;

}