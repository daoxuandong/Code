#include<bits/stdc++.h>
using namespace std;
int n,x[100],cnt;
int cheo1[100],cheo2[100],cot[100];
void Try(int i){
    
    for(int j=1;j<=n;j++){
        if(cot[j]==0 && cheo1[i+j]==0 && cheo2[i-j+n]==0){
            cot[j]=1;
            cheo1[i+j]=1;
            cheo2[i-j+n]=1;
            if(i==n){
        cnt++;
        
    }
           else  Try(i+1);
            cot[j]=0;
            cheo1[i+j]=0;
            cheo2[i-j+n]=0;
        }
    }
}
void solve() {
    cin>>n;
    cnt=0;
    Try(1);
    cout<<cnt<<endl;
}
int main()
{
    
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
