#include <iostream>
using namespace std;

int itc_len_num(long long number){
int a = 0;
if (number == 0){
    a = 1;
}
while (number != 0){
    a++;
    number = number/10;
}
return a;
}
