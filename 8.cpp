#include <iostream>
using namespace std;

int itc_null_count(long long number){
int ch = 0;
if(number < 0){
    number = number * -1;
}
if(number == 0){
    ch = 1;
}
while (number != 0){
    if(number%10 == 0){
        ch++;
    }
    number = number/10;
}
return ch;
}
