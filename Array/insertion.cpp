/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n1,n2;
	cin>>n1>>n2;

	vector<int> a(n1);
	vector<int> b(n2);

	int ele;
	for(int i=0; i<n1; i++){
		cin>>ele;
		a[i] = ele;
	}

	for(int i=0; i<n2; i++){
		cin>>ele;
		b[i] = ele;
	}

	vector<int> ans;
	int i,j;
	i=j=0;

	while(i<n1 && j<n2){

		if(a[i]==b[j]){
			ans.push_back(a[i]);
			i++;
			j++;
		}else if(a[i]<b[j]){
			i++;
		}else{
			j++;
		}

	}

	for(auto i: ans){
		cout<<i<<" ";
	}

	return 0;

}