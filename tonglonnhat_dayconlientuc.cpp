#include<iostream>
#include<algorithm>
using namespace std;
int maxs(int *a,int n){
    sort(a, a+n);
    return a[n-1];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n ; i++) cin>>a[i];
        long long max=-1e6;
        long long s=0;
        for(int i=0; i<n ; i++){
            s+=a[i];
            if(s>0){
                if(max<s) max=s;
            }
            else s=0;
        }
        if(max<0)
            cout<<maxs(a,n);
        else
            cout<<max;
        cout<<endl;
    }
}

