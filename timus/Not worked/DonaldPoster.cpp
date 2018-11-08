#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
int n, count=0, steps=0, address, addr0=0;
cin >> n;
string name;
for(int i=0; i<n; i++) {
    cin >> name;
    if (name[0]=='A' || name[0]=='P' || name[0]=='O')
        count=0;
    else
    if (name[0]=='B' || name[0]=='M' || name[0]=='S')
        count=1;
    else
    if(name[0]=='D' || name[0]=='G'|| name[0]=='J' || name[0]=='K' || name[0]=='T' || name[0]=='W')
        count=2;
}
addr0 = count;
steps+= addr0-0;
for (int i=0; i<n; i++){
    address=count;
    steps+=abs(address-addr0);
    addr0=address;
}
cout << steps;
return 0;
}
