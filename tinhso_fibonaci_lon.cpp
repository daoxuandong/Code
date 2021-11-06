#include<bits/stdc++.h>
using namespace std;
long long fibo[1001];
const long long mod=1e9+7;
void Fibo(){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=1000;i++){
		fibo[i]=(fibo[i-2]+fibo[i-1])%mod;
	}
}	
int main(){
	int t;cin>>t;
	while(t--){
		Fibo();
		int n;cin>>n;
		cout<<fibo[n]<<endl;
	}
}




