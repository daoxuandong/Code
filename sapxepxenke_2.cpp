#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;  
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
    int a[n]; 
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<(n+1)/2;i++){
        if(n-i-1==i) cout<<a[i]<<" ";
        else cout<<a[n-i-1]<<" "<<a[i]<<" ";
    }
    cout<<endl;
    }
	
}
