#include<bits/stdc++.h>
using namespace std;
void nhap(int a[50][50],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
}
int main( ){
    int n,m,p;
    cin>>n>>m>>p;
    int a[50][50],b[50][50];
    nhap(a,n,m);
    nhap(b,m,p);
        for(int i=0;i<n;i++) {
       	    for(int j=0;j<p;j++){
       	    	int s=0;
       	    	for(int k=0;k<m;k++){
       	    		s+=a[i][k] * b[k][j];
				   }
				   cout<<s<<" ";
    }
    cout<<endl;
}
}



