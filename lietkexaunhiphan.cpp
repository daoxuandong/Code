#include<iostream>
using namespace std;
int n,x[100];
void xuat(){
    for(int i=1; i<=n; i++){
        cout<<x[i];
    }
    cout<<" ";
}
void Try(int i){
    for(int j=0; j<=1; j++){
        x[i]=j;
        if ( i==n) xuat();
        else Try(i+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
    Try(0);
    cout<<endl;
    }
}

