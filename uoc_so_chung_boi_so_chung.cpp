#include<iostream>

using namespace std;
int GCD(long long a,long long b){
	while (a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	long long a,b;
		cin>>a >>b;
		cout<<a*b/GCD(a,b)<<" "<<GCD(a,b)<<endl;
		
	}
	return 0;
}


