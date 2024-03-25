#include <iostream>
using namespace std;

bool itc_mirror_num(long long number){
int a = 0;
long long ch = 0;
long long n = number;
while (number != 0){
    a = number%10;
    ch = ch*10 + a;
    number = number/10;
}
if(ch == n){
    return 1;
}else{
    return 0;
}
}
