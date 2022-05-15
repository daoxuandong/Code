#include<iostream>
using namespace std;
long long mod= 1e9+7;
long long lt(int n, long long k){
    if(k==0) return 1;
    if(k==1) return n;
    long long t = lt(n, k/2);
    if(k%2==0) return t * t%mod;
    return (t * t %mod) *n %mod;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
    	long long k;
		int n;
        cin >> n >> k;
    	cout << lt(n, k) << endl;
    }
}

