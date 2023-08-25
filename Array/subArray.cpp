
/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int n,k;
	cin>>n>>k;

	int l = -1;

	int arr[n];

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr[i]=ele;
	}


/*

	Subarray

	for(int i=0; i<n; i++){
		for(int j=i+1; j<=n; j++){
			int sum = 0;
			for(int k=i; k<j; k++){
				sum+=arr[k];
			}
			if(sum==k) l=max(l,j-i);
		}	
	}

*/

	cout<<l;

	return 0;

}