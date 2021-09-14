#include<bits/stdc++.h>
using namespace std;
void sphenic(){
	int n,dem=0;
	cin>>n;
	vector<int>a;
	for(int i=2;i<=n;i++){
		int kt=0;
		while(n%i==0){
			a.push_back(i);
			kt++;
			n/=i;
		}
		if(kt>0) dem++;
	}
	if(a.size()==3&&dem==3) cout<<1;
	else cout<<0;
	cout<<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	sphenic();
	}
}

