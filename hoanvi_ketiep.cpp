#include<iostream>
using namespace std;
int n,a[1000];
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int i=n-1;
	while(i>0&&a[i]>a[i+1]){
		i--;
	}
	if(i==0){
		for(int i=1;i<=n;i++) cout<<i<<" ";
	}
	else{
		int k=n;
		while(a[i]>a[k]) k--;
		swap(a[i],a[k]);
		int c=n,r=i+1;
		while(r<c){
            swap(a[r],a[c]);
            c--;r++;
        }
        for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    }
    cout<<endl;
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


