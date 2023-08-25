/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

string paritySort(){
	int n;
	cin>>n;

	vector<int> arr, odd, even;
	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr.push_back(ele);
		if(ele&1!=0){ odd.push_back(ele); }
		else{ even.push_back(ele); }
	}

	sort(odd.begin(), odd.end());
	sort(even.begin(), even.end());

	int a,b;
	a=0;
	b=0;

	for(int i=0; i<n; i++){
		if(arr[i]&1!=0){
			swap(arr[i], odd[a]);
			a++;
		}else{
			swap(arr[i], even[b]);
			b++;		
		}

		if(i>0 && (arr[i]<arr[i-1])){
			return "NO";
		}
	}

	return "YES";

}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int t;
	cin>>t;

	while(t--){
		cout<<paritySort()<<endl;
	}

	return 0;

}