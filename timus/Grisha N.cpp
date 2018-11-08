#include <iostream>

int main () {
int f, r;
std::cin >> f;
if (f>=1 && f <=11)
    f=f;
else std::cout <<"wrong f";
r=12-f;
if (r<=5)
    std::cout << "YES";
else std::cout<< "NO";
return 0;
}
