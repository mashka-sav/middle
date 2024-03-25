#include <iostream>
using namespace std;

int itc_second_max(long long number){
int mx = -1;
int mxx = -1;
int a = 0;
if(number < 0){
    number = number*-1;
}
if(number/10 == 0){
    return - 1;
} else{
    while (number != 0){
        a = number%10;
        if(mx <= a){
            mxx = mx;
            mx = a;
        }
        if(a < mx && a > mxx){
            mxx = a;
        }
        number = number / 10;
    }
return mxx;
}
}
