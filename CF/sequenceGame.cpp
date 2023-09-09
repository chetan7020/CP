/*

Build | ..... | Peace

Let's compare each pair of adjacent numbers. If the left number is smaller than the right number, then the right number is at least 
. We will insert 
 between them.

Now, for each pair of numbers, it is true that either these two numbers were originally in the sequence, or one of them is 
. In this case, if two numbers were originally in the sequence, then the left number is not smaller than the right number. If the left number is 
, then it is smaller than the right number, since the right number was at least 
. If the right number is 
, then the left number in the pair is not smaller than the right number.

We have checked all cases. It is evident that such a sequence is valid, as Vika would have only removed all the 
 we added and nothing more.

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

void solve(){
	int n, cnt=0;
	cin>>n;

	vector<int> arr(n), ans;

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	cnt++;
	ans.push_back(arr[0]);

	for(int i=1; i<n; i++){
		ans.push_back(arr[i]);
		if(arr[i]<arr[i-1]){
			ans.push_back(arr[i]);
			cnt++;
		}

		cnt++;
	}

	cout<<cnt<<endl;
	for(int i: ans){
		cout<<i<<" ";
	}
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		solve();
		cout<<endl;
	}

	return 0;

}