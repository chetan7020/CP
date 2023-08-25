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

	vector<int> arr;
	bool flag=false;
	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr.push_back(ele);
	}

	if(n==1) flag==true;


	if(flag){
		cout<<-1<<endl;
	}else{

		vector<int> b,c;

		sort(arr.begin(), arr.end());

		int t=arr[0];

		for(int i=0; i<n; i++){
			if(arr[i]==t) b.push_back(arr[i]);
			else c.push_back(arr[i]);
		}

		if(b.size()==0 || c.size()==0) cout<<-1<<endl;
		else{
			cout<<b.size()<<" "<<c.size()<<endl;

			for(auto i:b){
				cout<<i<<" ";
			}
			cout<<endl;
			for(auto i:c){
				cout<<i<<" ";
			}
			cout<<endl;
		}
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
		// cout<<endl;
	}

	return 0;

}