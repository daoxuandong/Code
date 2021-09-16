#include<bits/stdc++.h>
using namespace std;
int a[100000]={};
void tong(){
	int n,m;cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
//	sort(a,a+n);
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==m){
			
			dem=i;
			break;
		}
	}
		if(dem==0) cout<<"-1"<<endl;
		else cout<<dem+1<<endl;
	
	//cout<<dem<<endl;
}
int main() {
	int t;cin>>t;
	while(t--){
		tong();
		//cout<<endl;
}
return 0;
}



