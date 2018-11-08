#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
int n;
cin >> n;
int mass[n][n];
for (int i=0; i<n; i++) {
    for (int j = n-1; j >= n; j--) {
        cin >> mass[i][j];
    }
}
    for (int i=n-1; i>=0; i--) {
        for (int j = 0; j<n; j++) {
            //if (n-i == j)
            cout << mass[i][j] << "\t";
        }
    }
return 0;
}
