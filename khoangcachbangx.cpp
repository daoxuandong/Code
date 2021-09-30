#include <bits/stdc++.h> 
using namespace std; 
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n]; 
        int check=-1;
        bool ts[1000000]={false};
        for(int i=0;i<n;i++) {
            cin>>a[i];
            ts[a[i]]={true};
        }
        for(int i=0;i<n;i++){
            if(ts[x+a[i]]==true){
                check=1;
                break;
            } 
        }
        cout<<check<<endl;
    }
}