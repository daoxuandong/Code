#include<iostream>
#include<algorithm>
using namespace std;

void sort(int a[],int n){
    int k=n/2;
    int tmp = n - k;
    int arr[n];
    for(int i=0;i<n;i++) arr[i] = a[i];
    sort(arr,arr+n);
    int j=0;
    for(int i=0;i<n;i+=2){
        a[i]=arr[j];
        j++;
    }
    j=tmp;
    for(int i=1;i<n;i+=2){
        a[i]=arr[j];
        i++;
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

int main( ){
    int t;
    cin>>t;
    while(t--){
        int n,a[10001];
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,n);
        cout<<endl;
    }
}

