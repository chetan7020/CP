/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int countElements()
{
	int n, x;
	vector<int> a;
    map<char, int> ans;

    cin>>n>>x;

    while(n--){
    	int ele;
    	cin>>ele;
    	a.push_back(ele);
    }

    int cnt=0;

    for(auto i: a){
        ans[i]++;
        if(ans[i]<=x) cnt++;
        else break;
    }

    for(auto i: ans){
    	cout<<i.first<<" "<<i.second<<"\n";
    }

    return cnt;
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	// int n;
	// cin>>n;

	// while(n--){

	// 	cout<<countElements()<<"\n";
	// }

    for(int i=1; i<=3; i++){
    	for(int j=i; j>=1; j--){
    	    cout<<j<<" ";
    	}
    	cout<<"\n";
    }


	return 0;

}