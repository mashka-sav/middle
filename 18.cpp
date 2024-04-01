#include <iostream>
using namespace std;

int itc_rev_covert_num(long long number, int ss){
long long num = 0;
long long s = 0;
long long a = 0;
int f = 1;
while(number != 0){
        while (s+a > 0){
            f = f*ss;
            s--;
        }
        num = num + ((number%10)*f);
        number = number/10;
        a++;
}
return num;
}
