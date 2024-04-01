#include <iostream>
using namespace std;

int itc_covert_num(long long number, int ss){
long long a = 0;
long long ch = 10;
long long num = 0;
while(number > 0){
    a = number%ss;
    number = number / ss;
    num = ch*a + num;
    ch = ch*10;
}
return num/10;
}
