/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int a[] = {1,2,3,4,5,6,7};
	int n = 7;

	int k=8;

	int i,j;
	i=0;
	j=0;

	int sum=0, maxi=-1;

	while(j<n){
		sum+=a[j];
		if(j-i+1==k){
			maxi=max(maxi,sum);
			sum-=a[i];
			cout<<i<<" "<<j<<" "<<maxi<<endl;
			i++;
		}
		j++;

	}

	cout<<max(sum, maxi)<<endl;

	return 0;

}