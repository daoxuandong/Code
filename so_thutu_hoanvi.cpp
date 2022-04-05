#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<cstring>
#include<set>
#include<sstream>
using namespace std;
int n,a,x[100];
bool chuaxet[100];
vector<string>v;
void in(){
	string s="";
	for(int i=1;i<=n;i++){
		s+=to_string(x[i])+" ";
	}
	v.push_back(s);
}
void Try(int i ) {
    for(int j=1;j<=n;j++){
        if(!chuaxet[j]){
            chuaxet[j]=1;
            x[i]=j;
            if(i==n) in();
            else Try(i+1);
            chuaxet[j]=0;
        }
    }
}

void solve(){
    cin>>n;
    string s;
    for(int i=1;i<=n;i++){
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
