#include <iostream>
#include <cstdint>
#include <vector>
#include <list>
#include <set>
#include <sstream>
#include <algorithm>
#include <cstring>
using namespace std;

struct cmp{
    bool operator() (int a,int b) {return a>b;}
};

int main(){
    string str;
    getline(cin, str);
    vector<string> v;
    stringstream ss(str);
    string tmp = "";
    string res = "";
    while(ss>>tmp) {
        v.push_back(tmp);
        
    }
    for(int i=0; i<v.size()-1; i++) {
        string tmpStr = v[i];
        transform(tmpStr.begin(),tmpStr.end(), tmpStr.begin(), ::tolower);
        tmpStr[0] = toupper(tmpStr[0]);
        res+=tmpStr;
        if(i==v.size()-2) {
            res += ", ";
            
        }
        else { res += " ";
            
        }
        
    }
    string tmpStr = v[v.size()-1];
    transform(tmpStr.begin(), tmpStr.end(), tmpStr.begin(), ::toupper);
    res+=tmpStr;
    cout<<res<<endl;
 
}
