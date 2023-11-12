#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == b[i]){
                continue;
            } else if((a[i] == 'R' && b[i] == 'S') || (a[i] == 'S' && b[i] == 'P') || (a[i] == 'P' && b[i] == 'R')){
                cnt1++;
            } else {
                cnt2++;
            }
        }
        int t = 0;
        if(cnt1 <= cnt2){
            t = (cnt1 + cnt2) / 2;
            t += 1;
            cout << t - cnt1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
