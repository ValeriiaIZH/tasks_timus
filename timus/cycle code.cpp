#include <iostream>

int main (){
    int code_1;
    int code_2;

    std::cin >> code_1;
    std::cin >> code_2;
         if ((code_1+1)%2 || code_2%2)
             std::cout<<"yes";
         else std::cout<<"no";
    return 0;

}
