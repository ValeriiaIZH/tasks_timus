#include <iostream>

int main (){
int a, b, c, l[9];
std::cin >> a;
std::cin >> b;
std::cin >> c;
l[0]=a-b-c; l[1]=a+b-c;
l[2]=a-b+c; l[3]=a+b+c;
l[4]=a*b-c; l[5]=a*b+c;
l[6]=a-b*c; l[7]=a+b*c;
l[8]=a*b*c;
int min = l[0];
for (int i=0; i<9; i++){
 if(l[i]<min)
     min=l[i];
}
std::cout <<min;
return 0;
}

