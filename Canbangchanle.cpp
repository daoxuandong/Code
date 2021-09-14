#include<bits/stdc++.h>
using namespace std;
int check(int n){
	int a=0,b=0;
	while(n!=0){
		int k=n%10;
		if(k%2==0) a++;
		else b++;
		n/=10;
	}
	if(a==b) return 1;
	elsse return 0;
}
int main(){
    int n;
    cin>>n;
    int p=pow(10,n);
    int x=p/10;
    int dem=0;
    for(int i=x;i<p;i++){
    	if(check(i)){
    		cout<<i<<" ";
    		dem++;
		}
		if(dem==10){
			cout<<\n;
			dem=0;
		}
	}
}

