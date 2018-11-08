#include <iostream>

int main (){
int a1, b1, a2, b2, a3, b3;
std::cin >> a1 >> b1;
std::cin >> a2 >> b2;
std::cin >> a3 >> b3;
int c1=a3;
int c2=b2;
int i=b3-c1-c2;
int m2=b1-c2;
int m1=a1-c1;
std::cout << m1 << ' ' << m2;

}
