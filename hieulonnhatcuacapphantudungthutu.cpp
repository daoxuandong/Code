#include<iostream>
using namespace std;
void solve(){
    int n;cin>>n;
    long long a[n],min,max=-1;
    for(int i=0;i<n;i++) cin>>a[i];
    min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>=min){
            if(max<a[i]-min) max=a[i]-min;
        }
        else min=a[i];
    }
    cout<<max<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}