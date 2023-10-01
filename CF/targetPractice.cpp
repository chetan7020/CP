/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
// #define for(i, a, b) for(int i = (a); i < (b); i++)


using namespace std;

int points(int a, int b){
	if(a==0 || a==9 || b==0 || b==9) return 1;
	else if(a==1 || a==8 || b==1 || b==8) return 2;
	else if(a==2 || a==7 || b==2 || b==7) return 3;
	else if(a==3 || a==6 || b==3 || b==6) return 4;
	return 5;
}

int solve(){
	vector<string> arr(10);

	int ans = 0;

	for(int i=0; i<10; i++) cin>>arr[i];

	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(arr[i][j]=='X'){
				ans+=points(i, j);
			}
		}

	}

	return ans;
}

signed main(){

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