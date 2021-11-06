#include<bits/stdc++.h>
using namespace std;
long long fibo[10001];
void Fibo(){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=10000;i++){
		fibo[i]=(fibo[i-2]+fibo[i-1]);
	}
}	
int main(){
	int t;cin>>t;
	Fibo();
	while(t--){
		
		long long n;cin>>n;
		for(int i=0;i<10000;i++){
			if(fibo[i]==n){
				cout<<"YES";
				break;
			}
			if(fibo[i]>n){
				cout<<"NO";
				break;
			} 
		}
		cout<<endl;
	}
}




