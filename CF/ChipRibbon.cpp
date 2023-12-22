#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

mutex mtx;

void accessResource() {
  mtx.lock(); // Acquire the mutex
  // Access the shared resource
  cout << "Thread " << this_thread::get_id() << " accessing shared resource" << endl;
  mtx.unlock(); // Release the mutex
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	thread thread1(accessResource);
	thread thread2(accessResource);

	thread1.join();
	thread2.join();

	return 0;

}

