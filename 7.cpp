#include <iostream>
#include "middle.h"
using namespace std;

int itc_rev_num(long long number){
int a = 0;
long long k = 0;
while (number != 0){
    a = number%10;
    k = k*10 + a;
    number = number/10;
}

return itc_len_num(k);
}
