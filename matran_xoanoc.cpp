#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int b[100000];
        int cot,hang,i,d;
        cot=m-1,hang=n-1,d=0;
        int x=0;
        while (d<=n/2){
            for(i=d;i<=cot;i++) {b[x]=a[d][i];x++;}
            for(i=d+1;i<=hang;i++) {b[x]= a[i][cot];x++;}
            for(i=cot-1;i>=d;i--) {b[x]= a[hang][i];x++;}
            for(i=hang-1;i>d;i--) {b[x]= a[i][d];x++;}
            d++;hang--;cot--;
        }
        for(int i=0;i<n*m;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}

