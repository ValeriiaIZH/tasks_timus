#include <iostream>

int main (){
int m, n, c;
std::cin >> m >> n;
c=m*n;
if (c%2==0)
    std::cout << "[:=[first]";
else std::cout << "[second]=:]";
return 0;
}
