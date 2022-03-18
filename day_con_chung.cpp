#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m,k;cin>>n>>m>>k;
		long long a[n],b[m],c[k];
		for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<k;i++) cin>>c[i];
        int i=0,j=0,h=0;
        vector<long long> x;
        while(i<n&&j<m&&h<k){
        	if(a[i]==b[j]&&b[j]==c[h]){
                x.push_back(a[i]);
                i++;
                j++;
                h++;
            }
            else if(a[i]<b[j]) i++;
            else if(b[j]<c[h]) j++;
            else h++;
        }
        if(x.size()==0) cout<<"NO"<<endl;
        else{
            for(int i=0;i<x.size();i++) cout<<x[i]<<" ";
            cout<<endl;
        }
    }
}

