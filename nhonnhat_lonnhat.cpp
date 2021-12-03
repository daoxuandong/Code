#include<iostream>
using namespace std;
int main(){

    int m,s;
    cin >> m >> s;
    if( m*9 < s || s == 0 )
    {
        cout << "-1 -1" << '\n' ;
    }
    else
    {   int max[100] , min[100]={0}  ;
        int tmp = s ;
        for(int i = 0 ; i < m ; i++ )
        {
            if( tmp > 9 )
            {
                tmp -= 9 ;
                max[i] = 9 ;
            }
            else
            {
                max[i] = tmp ;
                tmp = 0 ;
            }
        }
        for(int i = m-1 ; i >= 0 ; i-- )
        {
            if( s > 9 )
            {
                s -= 9 ;
                min[i] = 9 ;
            }
            else
            {
                if( i == 0 )
                {
                    min[0] = s ;
                    break ;
                }
                else
                {
                    min[i] = s-1 ;
                    min[0] = 1 ;
                    break ;
                }
            }
        }
        for(int i = 0 ; i < m ; i++ ) cout << min[i] ;
        cout << ' ' ;
        for(int i = 0 ; i < m ; i++ ) cout << max[i] ;
    }
}


