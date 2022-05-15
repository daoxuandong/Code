#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;
#define FOR(i,a,b) for(int i=a; i<=b ; i++)
#define FO(i,a,b) for(int i=a; i<b ; i++)
#define FORD(i,a,b) for(int i=a; i>=b ; i--)
#define FOD(i,a,b) for(int i=a; i>b ; i--)
int n;
long long res;
priority_queue <int,vector <int>, greater <int> > pq;
void solve(){
    cin >> n;
    while(n--){
        int x ; cin >> x;
        pq.push(x);
    }
    res = 0;
    while(!pq.empty()){
        int l = pq.top(); pq.pop();
        int r = pq.top(); pq.pop();
        res = (res + (l + r));
        if(!pq.empty()) pq.push((l + r));
    }
    cout << res << "\n";
}

int main()
{
    int t=1;
    cin >> t;
   
    while(t--)
    {
        solve();
    }
    return 0;
}

