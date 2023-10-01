/*

Build | ..... | Peace

*/
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

int sumN(int n, int sum) {
    if (n == 0) return sum;
	    // sum += n;
	    // n--;
    return sumN(n-1, sum+n);
}

void solve() {
    int n;
    cin >> n;

    cout << "Sum of N: " << sumN(n, 0) << endl;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();

    return 0;
}