#include<bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
// #define int long long
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define mpii map<int,int>

void solve(){
	int n; cin>>n;
	vector<string>a(n);

	for(auto &i:a)cin>>i;

	stack<int>st;

	for(int i=0;i<n;i++){
		if(!st.empty() && a[i]=="+"){
			int a= st.top();
			st.pop();
			int b= st.top();
			st.push(a);
			st.push(a+b);				
		}else if(!st.empty() && a[i]=="C") st.pop();
		else if(!st.empty() && a[i]=="D"){
			int a= st.top();
			st.push(a*2);
		}else st.push(stoi(a[i]));

	}

	int ans=0;

	while(!st.empty()){
		ans+=st.top();
		st.pop();
	}

	cout<<ans<<endl;
}

void s2(){
	// vector<int>a;

	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    default_random_engine e(seed);

	// int n; cin>>n;

	vector<string>a;

	// for(int &i:a)cin>>i;

	for(int i=1;i<=50;i+=4)a.push_back(to_string(i));

	for(int i=0;i<2;i++)a.push_back("+");
	for(int i=0;i<5;i++)a.push_back("C");
	for(int i=0;i<3;i++)a.push_back("D");

	shuffle(a.begin(), a.end(), e);

	cout<<a.size()<<endl;

	for(auto i:a)cout<<i<<" ";
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif

	int t=1;
	// cin>>t;

	// while(t--) 
	solve();
	// s2();

	return 0;

}