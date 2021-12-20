#include<bits/stdc++.h>

using namespace std;
void xoay(int m,int n, int a[][100])
{
	int hang=0,cot=0;
	int prev;
	while(hang<m&&cot<n){
		if(hang+1==m||cot+1==n) break;
		prev=a[hang+1][cot]; 
		for(int i=cot;i<n;i++){
			swap(a[hang][i],prev);
		}
		hang++;
		for(int i=hang;i<m;i++){
			swap(a[i][n-1],prev);
		}
		n--;
		if(hang<m){
			for(int i=n-1;i>=cot;i--){
				swap(a[m-1][i],prev);
			}
		}
		m--;
		if(cot<n){
			for(int i=m-1;i>=hang;i--){
				swap(a[i][cot],prev);
			}
		}
		cot++;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int m,n;cin>>m>>n;
		int a[100][100];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		xoay(m,n,a);
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cout<<a[i][j]<<" ";
			
			}
		}
		cout<<endl;
	}
}

