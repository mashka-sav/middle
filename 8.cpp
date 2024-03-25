#include <iostream>
using namespace std;

int itc_null_count(long long number){
int ch = 0;
while (number != 0){
    if(number%10 == 0){
        ch++;
    }
    number = number/10;
}
return ch;
}
