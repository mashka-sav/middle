#include <iostream>
using namespace std;

int itc_min_num(long long number){
int mn = 10;
if (number == 0){
    mn = 0;
}
if (number < 0){
    number = number* -1;
}
while (number != 0){
    if(number%10 < mn){
        mn = number%10;
    }
    number = number / 10;
}
return mn;
}
