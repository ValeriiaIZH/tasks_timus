#include <iostream>
#include <string>

using namespace std;

int main(){
int n, people, money;
char flag='+';
cin >> n;
people=n+2;
for (int i=0; i<n; ++i) {
    string name;
    cin >> name;
    if(name[name.size()-4]==flag){
            people++;
    }
}
if(people==13) people++;
money=people*100;
cout << money;
return 0;
}
