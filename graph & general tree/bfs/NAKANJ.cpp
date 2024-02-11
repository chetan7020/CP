#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define int long long

#define dir vector<pair<int,int>> {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}}

using namespace std;

int sr_x, sr_y, des_x, des_y;

int bfs(){
	queue<pair<pair<int,int>, int>>q;
	vector<vector<int>>vis(9, vector<int>(9, -1));

	q.push({{sr_x, sr_y}, 0});
	vis[sr_x][sr_y]=1;

	while(q.size()){
		auto curr= q.front();

		int x= curr.ff.ff;
		int y= curr.ff.ss;
		int dis= curr.ss;

		if(x==des_x && y==des_y) return dis;

		q.pop();

		for(auto i: dir){
			int nx= x+i.ff;
			int ny= y+i.ss;

			if(nx<1 || ny<1 || nx>8 || ny>8) continue;
			if(vis[nx][ny]==1) continue;

			vis[nx][ny]=1;
			q.push({{nx, ny}, dis+1});
		}
	}

	return -1;
}

void solve(){

	string x, y; cin>>x>>y;

	sr_x= x[1];
	sr_y= x[0];

	sr_x=x[1]-'0';
	sr_y=x[0]-'a'+1;

	des_x=y[1]-'0';
	des_y=y[0]-'a'+1;

	cout<<bfs()<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif

	int t;
	cin>>t;

	while(t--) solve();

	return 0;

}