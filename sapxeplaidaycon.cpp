#include <bits/stdc++.h> 
using namespace std; 
void solve(){
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    int tang,giam;
    for(int i=0;i<n;i++) {
        if(b[i]!=a[i]){
            tang=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(b[i]!=a[i]){
            giam=i;
            break;
        }
    }
    cout<<tang+1<<" "<<giam+1 <<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}