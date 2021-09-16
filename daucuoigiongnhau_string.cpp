#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    long long dem = s.size() ;
    int a[150] = {0} ;
    for(int i = 0 ; i < s.size() ; i++ )
    {
        a[s[i]]++;
        
    }
    for(int i = 'a' ; i <= 'z' ; i++ )
    {
        int n = a[i] ;
        dem += n*(n-1)/2;
	
    }
   	cout << dem << endl;
}
int main()
{
    int t ;
    cin >> t;
    while( t-- )
    {
        solve() ;
    }
}


