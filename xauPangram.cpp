#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        int kt[10000]={0};
        for(int i=0;i<s.size();i++) kt[s[i]]=1;
        int dem =0;
        for(int i='a';i<='z';i++) if(!kt[i]) dem++;
        if(k>=dem) cout<<1<<endl;
        else cout<<0<<endl;
    }
}