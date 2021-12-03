#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0; i<s.size() ; i++){
            int dem=0;
            int key=i;
            while(s[i]==s[i+1]){
                dem++;
                i++;
            }
            cout<<s[key]<<dem+1;
        }
        cout<<endl;
    }
}

