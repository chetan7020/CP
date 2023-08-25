/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

void merger(vector<int> &arr, int i, int m,int j){
	int l=i;
	int r=m+1;

	vector<int> temp;

	while(l<=m && r<=j){
		if(arr[l]<=arr[r]){ 
			temp.push_back(arr[l]); 
			l++; 
		}
		else { 
			temp.push_back(arr[r]); 
			r++;
		}
	}

	while(l<=m){
		temp.push_back(arr[l]); 
		l++;
	}

	while(r<=j){
		temp.push_back(arr[r]); 
		r++;
	}

	for(int k=i; i<=j; i++){
		arr[k] = temp[k-i];
	}
}

void mergeSort(vector<int> &arr, int i, int j){
	if(i==j) return;
	int m=i+(j-i)/2;
	mergeSort(arr, i, m);
	mergeSort(arr, m+1, j);
	merger(arr, i, m, j);
}
 
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	vector<int> arr;

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr.push_back(ele);
	}

	int i=0;
	int j=n-1;

	mergeSort(arr, i, j);

	for(auto k:arr) cout<<k<<" ";
	cout<<endl;

	// cout<<"Hello World!";

	return 0;

}