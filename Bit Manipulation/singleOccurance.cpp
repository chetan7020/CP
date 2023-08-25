/*  Every number occurs twice only one number occurs ones print that no */


/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int getSingleOcuur(int arr[], int n){
	int ans = 0;
	for(int i=0; i<n; i++){
		ans = ans^arr[i];
	}

	return ans;
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int arr[] = {1,2,3,4,1,2,3};

	cout<<getSingleOcuur(arr, 7); 

	return 0;

}