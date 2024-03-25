#include <iostream>
#include "middle.h"
using namespace std;

int itc_mirror_count(long long number){
long long a = 1;
int ch = 0;
if(number > 0){
while (a < number){
    if(itc_mirror_num(a) == 1){
        ch++;
    }
    a++;
}
} else{
while (a > number){
    if(itc_mirror_num(a) == 1){
        ch++;
    }
    a--;
}
return ch;
}
}
