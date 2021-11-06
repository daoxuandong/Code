#include <iostream>
#include<vector>
#include<cmath>
#include <iomanip>
using namespace std;
struct Point{
    int x,y;
};
double dt(Point a, Point b){
    double aa=a.x*b.y-a.y*b.x;
    aa=abs(aa)/2;
    return aa;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Point a[n],b[100];
        for(int i=0; i<n ; i++){
            cin>>a[i].x>>a[i].y;
        }
        for(int i=1; i<n ; i++){
            b[i].x=a[0].x-a[i].x;
            b[i].y=a[0].y-a[i].y;
        }
        double s=0;
        for(int i=1; i<n-1 ; i++){
            double tmp=0;
            tmp=dt(b[i], b[i+1]);
            s+=tmp;
        }
        cout<<setprecision(3)<<fixed<<s;
        cout<<endl;
    }
}
