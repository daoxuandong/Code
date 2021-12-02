#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;

int mycompare(string x,string y){
    string xy= x+y;
    string yx = y+x;
    
    return xy.compare(yx)>0 ? 1:0;
}
void print(vector<string> a){
    sort(a.begin( ),a.end( ),mycompare);
    for(int i=0;i<a.size( );i++) cout<<a[i];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        vector<string> a;
        for(int i=0;i<n;i++){
            cin>>s;
            a.push_back(s);
        }
        print(a);
        cout<<endl;
    }
}

