#include<bits/stdc++.h>
#define max 100
#define FOR(i,a,b) for(int i=a; i<=b ; i++)

using namespace std;
int n,a[100],x[100];
bool chuaxet[100]={true};
void in(){
    FOR(i, 1, n) cout<<x[a[i]]<<" ";
    cout<<endl;
}
void Try(int i){
    FOR(j, 1, n){
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
    FOR(i, 1, n) cin>>x[i];
    sort(x+1, x+1+n);
    Try(1);
    cout<<endl;
}
int main()
{
    int t=1;
    while (t--)
    {
        solve();
    }
}

