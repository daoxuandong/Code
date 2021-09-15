
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ts[1000000] = {0}, a[1000000];
        for(int i=0;i<n;i++){
            cin>>a[i];
            ts[a[i]]++;
        }
        int dem=0;
        for(int i=0;i<n;i++){
            if(ts[a[i]]>1){
                dem+=ts[a[i]];
                ts[a[i]]=0;
            }
        }
        cout<<dem<<endl;
    }
}

