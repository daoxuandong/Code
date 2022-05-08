#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[101];
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<n; i++) {
        for(int j=i+1; j<=n; j++) {
            if(a[i]>a[j]) swap(a[i], a[j]);
        }
        cout << "Buoc " << i << ": ";
        for(int k=1; k<=n; k++) cout << a[k] << " ";
        cout << endl;
    }
}
