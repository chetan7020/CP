/*

Build | ..... | Peace

You are given an array consisting of n
 integers. Your task is to determine whether it is possible to color all its elements in two colors in such a way that the sums of the elements of both colors have the same parity and each color has at least one element colored.

For example, if the array is [1,2,4,3,2,3,5,4], 
we can color it as follows: [1,2,4,3,2,3,5,4], 
where the sum of the blue elements is 6 and the sum of the red elements is 18

*/

#include<bits/stdc++.h>

using namespace std;

bool solve(){
	int n;
	cin>>n;

	if(n==1) return false;

	int oc=0;

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;

		if(ele&1) oc++;
	}

	if(oc&1) return false;
	return true;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		if(solve()) cout<<"YES";
		else cout<<"NO";

		cout<<endl;
	}

	return 0;

}