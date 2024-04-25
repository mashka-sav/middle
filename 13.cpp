#include <iostream>
using namespace std;


long long itc_bin_num(long long ch){
long long j = 0;
long long jj = 0;
int y = 0;
long long result = 0;
long long a = 0;

if(ch % 2 == 0){
 y = 1;
}

while(ch != 0){
 a = a*10 + (ch % 2);
 ch = ch / 2;
}

while (a != 0){
    j = a % 10;
    jj = jj * 10 + j;
    a = a / 10;
}

if(y == 1){
 jj = jj * 10;
}
return jj;
}

