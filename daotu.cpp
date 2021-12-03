#include <iostream>
#include <cstdint>
#include <vector>
#include <list>
#include <set>
#include <sstream>
#include <algorithm>
#include <cstring>
#include <stack>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <map>
#include <queue>
#include <unordered_map>
#include <stack>
#define ll long long
using namespace std;

int main () {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        stack<string> v;
        while(ss>>s){
            v.push(s);
        }
        
        while(!v.empty()){
            cout<<v.top()<<" ";
            v.pop();
        }
        cout<<endl;
    }
}

