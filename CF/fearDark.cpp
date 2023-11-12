/*

Build | ..... | Peace


*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2) {
    double ans = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	return ans;
}

void solve(){
	vector<pair<int, int>> arr(3);

	for(int i=0; i<3; i++) cin>>arr[i].first>>arr[i].second;

	double x1,x2,x3,x4,x5;
	x1 = calculateDistance(arr[0].first, arr[0].second, arr[1].first, arr[1].second);
	x2 = calculateDistance(arr[0].first, arr[0].second, arr[2].first, arr[2].second);
	x3 = calculateDistance(0,0, arr[1].first, arr[1].second);
	x4 = calculateDistance(0,0,arr[2].first, arr[2].second);
	x5 = calculateDistance(arr[1].first, arr[1].second, arr[2].first, arr[2].second);

	double p = max(min(x1,x2),min(x3,x4));
	if(min(x1,x2)==x1&&min(x3,x4)==x3){
	}
	else if(min(x1,x2)==x2&&min(x3,x4)==x4){
	}
	else{
		if(x5>2*p){
			p = x5/2;
		}
	}
	cout <<setprecision(11);
	cout<<p;
}

signed main(){

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