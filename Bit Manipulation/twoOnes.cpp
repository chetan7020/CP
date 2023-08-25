/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int n;
	cin>>n;

	int arr[n];
	int xo = 0;

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr[i] = ele;
		xo^=ele;
	}

	

	return 0;

}