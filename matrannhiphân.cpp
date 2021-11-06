#include<bits/stdc++.h>
using namespace std;
int main() {
	
	int n,dem=0;cin>>n;
	int a[1000][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	 
	for(int i=0;i<n;i++){
		int x=0;
		for(int j=0;j<3;j++){
			if(a[i][j]==1) x++;
		}
		if(x>1) dem++;
	} 

	cout<<dem<<endl;
	
	
	
	
return 0;
}



