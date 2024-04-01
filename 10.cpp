#include <iostream>
#include "middle.h"
using namespace std;

int itc_mirror_count(long long number){
long long a = 1;
int ch = 0;
while (a <= number){
    if(itc_mirror_num(a)){
        ch++;
    }
    a++;
}

return ch;
}
