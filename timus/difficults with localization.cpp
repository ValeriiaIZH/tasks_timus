#include <iostream>

int main () {
    int n;
    std::cin >> n;
    if (n>=1 && n<=4)
        std::cout << "few";
    if (n>=5 && n<=9)
        std::cout << "several";
    if (n>=10 && n<=19)
        std::cout << "pack";
    if (n>=20 && n<=49)
        std::cout << "lots";
    if (n>=50 && n<=99)
        std::cout << "horde";
    if (n>=100 && n<=249)
        std::cout << "throng";
    if (n>=250 && n<=499)
        std::cout << "swarm";
    if (n>=500 && n<=999)
        std::cout << "zounds";
    if (n>=1000)
        std::cout << "legion";
return 0;
}
