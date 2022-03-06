#include<iostream>
using namespace std;
int a[100],n,k,ans=0,b[10000];
void in(){
	int sum=0,check=0;
	for(int i=1;i<=n;i++){
		if(a[i]){
			sum+=b[i];
			if(sum>k) return;
		}
	}
	if(sum==k) check=1;
	if(check) {
		ans++;
		for(int i=1;i<=n;i++){
			if(a[i]) cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n) in();
        else Try(i+1);
    }
}
void solve() {
    cin>>n>>k;
    for(int i=1;i<=n;i++) a[i]=0;
    for(int i=1;i<=n;i++) cin>>b[i];
    Try(1);
    cout<<ans<<endl;
}
int main()
{
   
    int t=1;

    while (t--)
    {
        solve();
    }
}

