#include <bits/stdc++.h> 
using namespace std;  
int pos(int *a,int n){
    int sum=0;
    int left=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        sum-=a[i];
        int right=sum;
        if(left==right){
            return i+1;
        }
        left+=a[i];    
    }
    return -1;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<pos(a,n)<<endl;
    }
}