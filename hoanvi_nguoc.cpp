#include<bits/stdc++.h>
using namespace std;
int n,a[100];
bool chuaxet[100]={true};
void in(){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<" ";
}
void Try(int i){
    for(int j=n;j>=1;j--){
        if(!chuaxet[j]){
            a[i]=j;
            chuaxet[j]=true;
            if(i==n) in();
            else Try(i+1);
            chuaxet[j]=false;
        }
    }
}
void solve() {
    cin>>n;
    Try(1);
    cout<<endl;
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

