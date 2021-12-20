#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    bool ok=true;
    for(int i=0;i<s.size();i++){
        if(s[i] != s[s.size()-i-1]) ok=false;
        if((s[i]-'0')%2 != 0) ok=false;
    }
    if(ok) cout<<"YES";
    else cout<<"NO";
}
int main() {
	int t;cin>>t;
	while(t--){
		solve();
		cout<<endl;

}
   }

		





