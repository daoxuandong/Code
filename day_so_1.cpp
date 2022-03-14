#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		cout<<"[";
		for(int j=0;j<n-i;j++){
			cout<<a[j];
			if(j<n-i-1) cout<<" ";
			a[j]+=a[j+1];
		}
		cout<<"]"<<endl;
	}
}
int main()
{
    
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
