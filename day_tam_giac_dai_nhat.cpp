#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int a[n],f[n],g[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) f[i]=1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]) f[i]+=f[i-1];
    }
    for(int i=0;i<n;i++) g[i]=1;
    for(int i=n-2;i>=0;i--){
        if(a[i]>a[i+1]) g[i]+=g[i+1];
    }
    int Max=0;
    for(int i=0;i<n;i++) Max=max(f[i]+g[i]-1,Max);
    cout<<Max<<endl;
   
   
}
int main()
{
   
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}




