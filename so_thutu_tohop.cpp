#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<cstring>
#include<set>
#include<sstream>
using namespace std;
int n,k,a,x[100];
bool chuaxet[100];
vector<string>v;
void in(){
	string s="";
	for(int i=1;i<=k;i++){
		s+=to_string(x[i])+" ";
	}
	v.push_back(s);
}
void Try(int i) {
    for(int j=x[i-1]+1;j<=n+k-i;j++){
            x[i]=j;
            if(i==k) in();
            else Try(i+1);
    }
}

void solve(){
    cin>>n>>k;
    string s;
    for(int i=1;i<=k;i++){
        cin>>a;
        s+=to_string(a)+" ";
    }
    Try(1);
    for(int i=0;i<v.size();i++){
        if(s==v[i]) {
            cout<<i+1<<endl;
            return;
        }
    }

}
int main(){
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
