/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

double circleIntersectionArea(double r1, double r2, double d) {
    if (d >= r1 + r2) return 0.0; // Circles do not intersect

    if (d <= abs(r1 - r2) && r1 >= r2) return M_PI * r2 * r2; // Circle 2 is completely inside Circle 1

    if (d <= abs(r1 - r2) && r1 < r2) return M_PI * r1 * r1; // Circle 1 is completely inside Circle 2

    double angle1 = 2.0 * acos((r1 * r1 + d * d - r2 * r2) / (2.0 * r1 * d));
    double angle2 = 2.0 * acos((r2 * r2 + d * d - r1 * r1) / (2.0 * r2 * d));

    double area1 = 0.5 * r1 * r1 * (angle1 - sin(angle1));
    double area2 = 0.5 * r2 * r2 * (angle2 - sin(angle2));

    return area1 + area2;
}

void solve(){
	double r1, r2, x1, y1, x2, y2;

	cin>>x1>>y1>>r1>>x2>>y2>>r2;

	double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	setprecision(8);

	cout<<circleIntersectionArea(r1, r2, d);

}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	solve();

	// int t;
	// cin>>t;

	// while(t--){
	// 	cout<<solve()<<endl;
	// }

	return 0;

}