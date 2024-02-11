/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

vector<int> nsl(vector<int> &heights){
	stack<int> stk;
  vector<int> ans;

  int n=heights.size();

  for(int i=0; i<n; i++){
    while(!stk.empty() && heights[stk.top()]>=heights[i]){
      stk.pop();
    }

    if(stk.empty()) ans.push_back(-1);
    else ans.push_back(stk.top());

    stk.push(i);
  }

  return ans;
}

vector<int> nsr(vector<int> &heights){
  stack<int> stk;
  vector<int> ans;

  int n=heights.size();

  for(int i=(n-1); i>=0; i--){
    while(!stk.empty() && heights[stk.top()]>=heights[i]){
      stk.pop();
    }

    if(stk.empty()) ans.push_back(n);
    else ans.push_back(stk.top());

    stk.push(i);
  }

  reverse(ans.begin(), ans.end());

  return ans;
}

int largestRectangle() {
	vector<int> heights;

	int n;
	cin>>n;

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		heights.push_back(ele);
	}

	vector<int> nslArr = nsl(heights);
	vector<int> nsrArr = nsr(heights);

	cout<<"NSL : ";
	for(auto i:nslArr){
		cout<<i<<" ";
	}

	cout<<endl;

	cout<<"NSR : ";
	for(auto i:nsrArr){
		cout<<i<<" ";
	}

	cout<<endl;

	int maxi=-1;

	cout<<"Area : ";

	for(int i=0; i<n; i++){
		int width = ((nsrArr[i]-nslArr[i]-1)*heights[i]);
		maxi=max(maxi, width);
	}

	cout<<endl;

	return maxi;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	t=1;

	while(t--){
		cout<<"Maximum Area of Rectangle : "<<largestRectangle();

		cout<<endl;
	}

	return 0;

}