#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct svien{
    string masv;
    string ht;
    string lop;
    string mail;
    string cty;
};
bool mycompare(string a,string b){
    return (a.compare(b)<0)? true:false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    struct svien sv[n];
    for(int i=0;i<n;i++){
        cin>>sv[i].masv;
        cin.ignore();
        getline(cin,sv[i].ht);
        cin>>sv[i].lop;
        cin>>sv[i].mail;
        cin>>sv[i].cty;
    }
    int q;
    cin>>q;
    vector<string> names;
    while(q--){
        string s;
        cin>>s;
        names.push_back(s);
    }
    for(int index=0;index<names.size();index++){
        vector<string> save;
        for(int i=0;i<n;i++){
            if(names[index]==sv[i].cty){
                save.push_back(sv[i].masv);
            }
        }
        sort(save.begin(),save.end(),mycompare);
        int pos=0;
        while(pos<save.size()){
            for(int i=0;i<n;i++){
                if(sv[i].masv==save[pos]){
                    cout<<i+1<<" "<<sv[i].masv<<" "<<sv[i].ht<<" "<<sv[i].lop<<" "<<sv[i].mail<<" "<<sv[i].cty;
                    cout<<endl;
                    pos++;
                }
            }
        }
    }
}

