#include<bits/stdc++.h>
using namespace std;
int a[100],n;
void in() {
	int check=1;
	for(int i=1;i<=n/2;i++){
		if(a[i]!=a[n-i+1]){
			check=0;
			break;
		}
	}
	if(check){
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n) in();
		else Try(i+1);
	}
}
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++) a[i]=0;
	Try(1);
}
int main(){

		solve();
	
}
