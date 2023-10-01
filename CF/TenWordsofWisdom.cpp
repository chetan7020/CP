/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	int t;
	cin>>t;

	while(t--){

		int n;
		cin>>n;
		int i=0;
		int maxi=-99999;
		int ans=-1;
		while(i<n){
			int a,b;
			cin>>a>>b;

			if(a<=10){
				if(b>maxi){
					maxi = b;
					ans = i+1;
				}
			}

			i++;
		}
		cout<<ans<<"\n";
	}
	return 0;

}