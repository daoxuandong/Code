#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;
#define FORD(i,a,b) for(int i=a; i>=b ; i--)
int a[10]={1,2,5,10,20,50,100,200,500,1000};
int n;
void solve(){
    cin>>n;
    int ans=0;
    FORD(i, 9, 0){
        while(n>=a[i]) {
            ans++;
            n-=a[i];
        }
        if(n==0) break;
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

