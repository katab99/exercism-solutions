#include "triangle.h"
#include <stdexcept> 

namespace triangle {

    flavor kind(double a, double b, double c){
        double sum = a + b + c;

        if(sum - a < a || sum - b < b || sum - c < c || (a == 0 && b == 0 && c == 0)){
             throw std::domain_error("Invalid values, inequality violation");
        }

        if(a == b && b == c){
            return flavor::equilateral;
        }else if(a == b || b == c || a == c){
            return flavor::isosceles;
        }else{
            return flavor::scalene;
        }

                
    }
}  // namespace triangle
