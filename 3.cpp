#include <iostream>
using namespace std;

int itc_sum_num(long long number){
int a = 0;
while (number != 0){
    a += number%10;
    number = number/10;
}
if(a < 0){
    a = a*-1;
}
return a;
}
