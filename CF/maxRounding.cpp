/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

string solve(){
	string ans;
	cin>>ans;

	ans = "0"+ans;

	int n = ans.size();
	int k=n;

	for(int i=n-1; i>=0; i--){
		if(ans[i]>='5'){
			ans[i]='0';
			k=i;
			int j=i-1;
			while(ans[j]=='9'){
				ans[j]='0';
				j--;
			}

			ans[j]++;
		}
	}

	for(int i=k; i<n; i++) ans[i]='0';

	if(ans[0] == '0') ans=ans.substr(1);

	return ans;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){

		cout<<solve()<<endl;
	}

	return 0;

}