#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
int n, sum=0;
cin >> n;
while (n!=1) {
    if (n < 1) {
        sum += n;
        n++;
    }
    else {
        sum += n;
        n--;
    }
}
cout << sum+1;
return 0;
}
