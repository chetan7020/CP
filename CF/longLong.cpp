/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> arr(n);
	int j=0;
	for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
		if(temp){
			arr[j++]=temp;
		}
	}

	if(j){

		long long ans= 0;

	    int positiveSegments = 0;
	    int negativeSegments = 0;
	    int currentSegment = 0;

	    for(int i = 0; i < j; i++) {

	    	ans+=abs(arr[i]);

	        if(arr[i] > 0) {
	            if(currentSegment < 0) {
	                negativeSegments++;
	            }
	            currentSegment = 1;
	        } else if(arr[i] < 0) {
	            if(currentSegment > 0) {
	                positiveSegments++;
	            }
	            currentSegment = -1;
	        }
	    }

	    if(currentSegment > 0) {
	        positiveSegments++;
	    } else if(currentSegment < 0) {
	        negativeSegments++;
	    }

	    cout<<ans<<" "<<min(positiveSegments+1, negativeSegments);

	}else cout<<0<<" "<<0;
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