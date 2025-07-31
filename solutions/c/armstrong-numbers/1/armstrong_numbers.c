#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int candidate){
    int digits = 0;
    int temp = candidate;
    int sum = 0;
    int left_over;
    
    while(temp != 0){
        temp /= 10;
        digits++;
    }

    temp = candidate;
    for(int i = 0; i < digits; i++){
        left_over = temp % 10;
        sum += pow(left_over, digits);
        temp /= 10;
    }

    return sum == candidate;
}