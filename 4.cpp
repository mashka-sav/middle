#include <iostream>
using namespace std;

int itc_multi_num(long long number){
int a = 1;
if (number == 0){
    a = 0;
}
if (number < 0){
    number = number* -1;
}
while (number != 0){
    a = a*(number%10);
    number = number / 10;
}
return a;
}
