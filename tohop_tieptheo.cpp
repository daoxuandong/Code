#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
void solve() {
    int n,k;
    cin>>n>>k;
    set<int> st;
    for(int i=1;i<=k;i++) {
        cin>>a[i];
        b[i]=a[i];
    }
    int i=k;
    while(a[i]== n-k+i) i--;
    if(i==0) {
        cout<<k<<endl;
        return;
    }
    else{
        a[i]++;
        int p=a[i];
        while(i<=k) a[i++]=p++;
        for(int i=1;i<=k;i++) st.insert(a[i]);
    }
    int ans=0;
    for(int i=1;i<=k;i++){
        if(st.find(b[i])==st.end()) ans++;
    }
    cout<<ans<<endl;
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

