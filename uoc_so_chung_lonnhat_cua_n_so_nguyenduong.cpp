#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b) {
	long long gcd=__gcd(a,b);
	return a*b/gcd;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long long tmp=1;
		for(int i=1; i<=n; i++) {
			tmp=lcm(tmp,i);
		}
		cout << tmp << endl;
	}
}

