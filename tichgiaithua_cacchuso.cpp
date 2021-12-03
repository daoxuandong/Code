#include<iostream>
#include<algorithm>
using namespace std;
int prime(long long n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return 1;
}
int main( ){
    int t;
    cin>>t;
    while(t--){
        long long a,n;
        cin>>a>>n;
        int arr[15],brr[101],x=0,y=0;
        while(n!=0){
            if(n%10>1) arr[x++]=n%10;
            n/=10;
        }
        for(int i=0;i<x;i++){
            if(prime(arr[i])) brr[y++]=arr[i];
            else{
                if(arr[i]==4){
                    brr[y++]=3;
                    brr[y++]=2;
                    brr[y++]=2;
                    continue;
                }
                if(arr[i]==6){
                    brr[y++]=5;
                    brr[y++]=3;
                    continue;
                }
                if(arr[i]==8){
                    brr[y++]=7;
                    brr[y++]=2;
                    brr[y++]=2;
                    brr[y++]=2;
                    continue;
                }
                if(arr[i]==9){
                    brr[y++]=7;
                    brr[y++]=3;
                    brr[y++]=3;
                    brr[y++]=2;
                    continue;
                }
            }
        }
        sort(brr,brr+y);
        for(int i=y-1;i>=0;i--) cout<<brr[i];
        cout<<endl;
    }
    return 0;
}

