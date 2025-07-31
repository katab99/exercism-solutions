#include "grains.h"
#include <cmath>
#include <iostream>

namespace grains {

    long long unsigned int square(int n){
        return pow(2, n - 1);
    }
    
    long long unsigned int total(){
        long long unsigned int sum = 0;
        
        for(int i = 0; i < 64; i++){
            sum += (long long unsigned int)pow(2, i);
        }

        return sum;
    }

}  // namespace grains
