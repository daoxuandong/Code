#include<bits/stdc++.h>
using namespace std;
bool prime(int a){
    if(a<2) return false;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
    }
    return true;
}
int check(int a){
	int b,c,dem=0,dem1=0,dem2=0;
	while(a>9){
		b=a%10;
		a/=10;
		c=a%10;
		if(b>c) dem1++;
		if(c>b) dem2++;
		dem++;
	}
	if(dem1==dem || dem2==dem) return 1;
	return 0;
}
int main(){
	 int t;
    cin >> t;
    while(t--){
    	int a;
    	cin>>a;
   		int n=pow(10,a-1);
    	int x=pow(10,a);
    	int dem=0;
    	for(int i=n;i<=x;i++){
    		if(check(i)){
    			if(prime(i)) dem++;
    		
			}
		}	
		cout<<dem<<endl;
	}
}
