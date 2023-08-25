/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

void shiftByOne(vector<int>& arr, int n){
	cout<<"Hi"<<endl;
	int temp = arr[0];
	for(int i=1; i<n; i++){
		arr[i-1] = arr[i];
	}

	arr[n-1] = temp;
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	
	int n, k;
	cin>>n>>k;

	vector<int> arr(n);

	cout<<n<<" "<<k;

	// for(int i=0; i<n; i++){
	// 	int ele;
	// 	cin>>ele;
	// 	arr[i] = ele;
	// }


	// while(k>0){
	// 	shiftByOne(arr, n);
	// 	k--;
	// }

	// for(auto i: arr){
	// 	cout<<i<<" ";
	// }


	return 0;

}