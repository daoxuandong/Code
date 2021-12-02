#include<iostream>
#include<math.h>
using namespace std;
const long long mod= 1e9 +7;
long long mu(long long  a, long long n){
    if(n==0) return 1;
    if(n==1) return a%mod;
    else{
        long long t=mu(a,n/2)%mod;
        if (n%2==0) return (t*t)%mod;
        else return ( (t*t)%mod * a%mod )%mod;
    }
}
int main( ){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long sum=0;
        for(int i=1;i<=n;i++){
            long long a;
            cin>>a;
            long long tmp=mu(x, n-i);
            sum=(sum%mod +(tmp%mod*a%mod)%mod)%mod;
        }
        cout<<sum<<endl;
    }
}

