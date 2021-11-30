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
#include<fstream>
#define ll long long
using namespace std;


int main(){
  
    
    ifstream fp1;
    ofstream fp2;
    fp1.open("PTIT.in");
    fp2.open("PTIT.out");
    while(!fp1.eof()){
        char s;
        fp1.get(s);
        fp2<<s;
    }
    fp1.close();
    fp2.close();
}


