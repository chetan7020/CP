/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

void firstNegi(){
	int n=7;
	int k=3;

	queue<int> neg;
	vector<int> ans;

	int a[]={-1,2,3,7,4,-5,6};

	int i=0;
	int j=0;

	while(j<n){
		if(a[j]<0) neg.push(a[j]);

		if((j-i+1)<k){
			if(neg.size()==0) ans.push_back(0);
			else{
				int ele = neg.front();
				ans.push_back(ele);
			}
			if(a[i]==neg.front()) neg.pop();
			i++;
		}
		j++; 	
	}
	for(auto i: ans){
		cout<<i<<" ";
	}

}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	firstNegi();

	return 0;

}