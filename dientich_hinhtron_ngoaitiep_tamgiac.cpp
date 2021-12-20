#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<cmath>
#define PI 3.141592653589793238
using namespace std;
struct Point{
    double x,y;
};
double distance(Point p, Point q){
    double dx=p.x-q.x,dy=p.y-q.y;
    return sqrt(dx*dx+dy*dy);
}
bool check(double a,double b , double c){
    if(a+b<=c || a+c <=b || b+c <=a) return false;
    return true;
}
int main(){
    
    int t;
    cin>>t;
    while(t--){
        Point a[3];
        for(int i=0; i<3 ; i++){
            cin>>a[i].x>>a[i].y;
        }
        double d1=distance(a[0],a[1]),d2=distance(a[0], a[2]),d3=distance(a[1],a[2]);
        if(!check(d1, d2, d3)) cout<<"INVALID";
        else {
            double tmp=(d1+d2+d3)*(d1+d2-d3)*(d1+d3-d2)*(d2+d3-d1);
            double s=0.25*sqrt(tmp);
            double r=d1*d2*d3/(4*s);
            cout<<setprecision(3)<<fixed<<PI*r*r;
        }
        cout<<endl;
    }
}

