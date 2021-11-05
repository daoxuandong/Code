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
#include<iomanip>

#define ll long long
using namespace std;
long long a[50] , s ;
int n ,  Min = 50;

void Try(int i,long long sum,int dem)
{
    if( sum > s )
        return ;
    if( sum == s )
    {
        Min = min(Min,dem);
        return ;
    }
    if( i > n )
        return ;
    if( sum + a[i] <= s )
        Try(i+1,sum+a[i],dem+1);
    Try(i+1,sum,dem);
}

int main(){

    cin >> n >> s;
    for(int i = 1 ; i <= n ; i++ )
        cin >> a[i];
    Try(1,0,0);
    if(Min==50) cout<<-1;
    else cout<<Min;
}
