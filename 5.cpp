#include <iostream>
using namespace std;

int itc_max_num(long long number){
int mx = -1;
if (number == 0){
    mx = 0;
}
if (number < 0){
    number = number* -1;
}
while (number != 0){
    if(number%10 > mx){
        mx = number%10;
    }
    number = number / 10;
}
return mx;
}
