#include<bits/stdc++.h>
using namespace std;
void xoa(int a[],int &n,int vitri){
	for(int i=vitri;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
}
void abc(int a[],int &n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				xoa(a,n,j);
				j--;
			}
		}
	}
}
int main() {
	int n;cin>>n;
	int a[100000];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	
	for(int i=0;i<n;i++){
		abc(a,n);
	 	cout<<a[i]<<" ";
	}
	
return 0;
}



