#include <iostream>
using namespace std;

long long itc_bin_num(long long number){
long long a = 0;
long long ch = 10;
long long num = 0;
while(number > 0){
    a = number%2;
    number = number / 2;
    num = ch*a + num;
    ch = ch*10;
}
return num/10;
}
