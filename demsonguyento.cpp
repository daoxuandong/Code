#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n) ; i++){
        if(n%i==0) return false;
    }
    return true;
}
void solve(){
    int a,b;
    cin>>a>>b;
    int dem=0;
    for(int i=a; i<=b; i++){
        if(check(i)) dem++;
    }
    cout<<dem<<endl;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       solve();
   }

}

