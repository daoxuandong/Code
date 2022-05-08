#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a[101];
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n-1; i++) {
        bool swapper=false;
        for(int j=0; j<n-i-1; j++) {
            if(a[j]>a[j+1]) {
                swap(a[j], a[j+1]);
                swapper=true;
            }
        }
        if(swapper==true) {
            cout << "Buoc " << i+1 << ": ";
            for(int k=0; k<n; k++) cout << a[k] << " ";
            cout << endl;
        }
        else break;
    }
}
