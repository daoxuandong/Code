#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long long a[n];
		bool mark[n]={false};
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>=0&&a[i]<n) mark[a[i]]=true;
			
		}
		for(int i=0;i<n;i++){
			if(mark[i]) cout<<i<<" ";
			else cout<<-1<<" ";
		}
			cout<<endl;
	}
}
