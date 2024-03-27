/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>


//----------------------- MACRO START ---------------------------

#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define int long long

#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

#define sum(a) accumulate(a.begin(), a.end(), 0LL)
#define srt(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define maxi(a) *max_element(a.begin(), a.end())
#define mini(a) *min_element(a.begin(), a.end())

#define direc_4 vector<pair<int,int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}
#define direc_8 vector<pair<int,int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}}

#define SEIVE(n, sv) \
    sv[0] = sv[1] = 0; \
    for (int i = 2; i <= n; i++) { \
        if (sv[i] == 0) continue; \
        for (int j = i * i; j <= n; j += i) { \
            sv[j] = 0; \
        } \
    }

//----------------------- MACRO END ---------------------------

using namespace std;

struct node{
	int mini;
	int cnt;

	node(int m=1e9, int c=0){
		mini= m;
		cnt= c;
	}
};

node merge(node a, node b){
	node ans;
	if(a.mini == b.mini){
		ans.mini= a.mini;
		ans.cnt= a.cnt + b.cnt;
	}else{
		if(a.mini < b.mini){
			ans= a;
		}else{
			ans=b;
		}
	}
	return ans;
}

int n;
int a[100100];
node t[400100];

void build(int idx, int l, int r){
	if(l==r){
		t[idx]= node(a[l], 1);
		return;
	}

	int mid= (l+r)/2;

	build(idx*2, l, mid);
	build(idx*2+1, mid+1, r);

	t[idx]= merge(t[idx*2], t[idx*2+1]);
}

void update(int idx, int l, int r, int pos, int val){
	if(pos<l || pos>r) return;
	if(l==r){
		t[idx]= node(val, 1);
		a[l]= val;
		return;
	}

	int mid= (l+r)/2;
	int left= idx*2, right= idx*2+1;

	update(left, l, mid, pos, val);
	update(right, mid+1, r, pos, val);

	t[idx]= merge(t[idx*2], t[idx*2+1]);
}

node query(int idx, int l, int r, int lq, int rq){
	if(r<lq || rq<l) return node();

	if(lq<=l && r<=rq) return t[idx];

	int mid= (l+r)/2;
	int left= idx*2, right= idx*2+1;

	return merge( query(left, l, mid, lq, rq), query(right, mid+1, r, lq, rq) );
}


void solve(){

	cin>>n;

	for(int i=0;i<n;i++)cin>>a[i];


	build(1,0,n-1);

	int q; cin>>q;

	while(q--){
		int ch; cin>>ch;

		if(ch==1){
			int pos, val; cin>>pos>>val;
			update(1,0,n-1,pos,val);
		}else{
			int lq, rq; cin>>lq>>rq;
			node ans= query(1,0,n-1,lq,rq);
			cout<<ans.mini<<" "<<ans.cnt<<endl;
		}
	}

	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif

    solve();

	return 0;

}