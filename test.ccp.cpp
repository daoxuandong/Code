#include<bits/stdc++.h>
using namespace std;
string de1="ABBADCCABDCCABD";
string de2="ACCABCDDBBCDDBB";	
void output(){
	char a[15];
	int de;cin>>de;
	for(int i=0;i<15;i++){
		cin>>a[i];
	}
	float dem=0;
	if(de==101){
		for(int i=0;i<15;i++){
			if(a[i]==de1[i]) dem++;
		}
	}
	else{
		for(int i=0;i<15;i++){
			if(a[i]==de2[i]) dem++;
		}
	}
	cout<<setprecision(2)<<fixed<<dem/1.5;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        output();
        cout<<endl;
    }
}

