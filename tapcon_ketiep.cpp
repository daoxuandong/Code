#include<bits/stdc++.h>
using namespace std;
int a[10000];
void solve(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=k;i++) cin>>a[i];
	int i=k;
	while(a[i]==n-k+i) i--;
	if(i==0) for(int i=1;i<=k;i++) cout<<i<<" ";
	else{
		a[i]++;
		int x=a[i];
		while(i<=k) a[i++]=x++;
		for(int i=1;i<=k;i++) cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t;cin>>t;
	while (t--){
		solve();
	}
}
