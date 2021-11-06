#include<bits/stdc++.h>
using namespace std;
long long fibo(long long n){
	if(n==0||n==1) return 1;
	long long f1=1,f2=1,f3=0;
	while(f3<n){
		f1=f2;
		f2=f3;
		f3=f1+f2;
		}
		if(f3==n) return 1;
		else return 0;
}	
int main() {
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		if(fibo(a[i])) cout<<a[i]<<" ";
		} 
			cout<<endl;
		}
		return 0;
}
   	

		





