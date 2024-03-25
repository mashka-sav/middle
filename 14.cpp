#include <iostream>
using namespace std;

long long itc_oct_num(long long number){
int a = 0;
long long ch = 10;
long long num;
while(number > 0){
    a = number%8;
    number = number / 8;
    num = ch*a + num;
    ch = ch*10;
}
return num/10;
}
