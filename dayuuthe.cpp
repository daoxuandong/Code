#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
long long to_int(string s)
{
    int res =0  ;
    for(int i = 0 ; i < s.size() ; i++ ) res = res*10 + (int)(s[i]-'0');
    return res;
}
void solve()
{
    stringstream ss ;
    string s;
    getline(cin,s);
    vector<string> v;
    ss << s ;
    while( ss >> s )
    {
        v.push_back(s);
    }
    int even = 0 , odd = 0;
    for(int i = 0 ; i < v.size() ; i++ ){
        long long tmp = to_int(v[i]);
        if( tmp&1 ) odd++;
        else even++;
    }
    if( v.size()%2 == 0 )
    {
        if( even > odd ) cout << "YES" ;
        else cout << "NO" ;
    }
    else
    {
        if( odd > even ) cout << "YES";
        else cout <<"NO";
    }
    cout <<endl ;
}
int main(){
    int t ;
    cin >> t;
    cin.ignore() ;
    while( t-- )
    {
        solve();
    }
}

