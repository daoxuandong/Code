#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int mod=1e9+7;
ll n;
struct Matrix{
    ll matrix[2][2];
    Matrix(){
            matrix[0][0] = 0;
            matrix[0][1] = 1;
            matrix[1][0] = 1;
            matrix[1][1] = 1;
        }
};
Matrix operator*(Matrix a,Matrix b){
    Matrix tmp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            tmp.matrix[i][j] = 0;
            for(int k=0;k<2;k++){
                tmp.matrix[i][j]=(tmp.matrix[i][j] + a.matrix[i][k] * b.matrix[k][j]) % mod;
            }
        }
    }
    return tmp;
}
Matrix POW(Matrix a, ll k){
    if(k==1) return a;
    Matrix tmp=POW(a,k/2);
    if(k%2==0) return tmp*tmp;
    return tmp*tmp*a;
}
void solve(){
    Matrix A;
    cin>>n;
    A=POW(A, n);
    cout<<A.matrix[0][1]<<endl;
}
int main()
{
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

