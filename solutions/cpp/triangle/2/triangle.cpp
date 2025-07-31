#include "triangle.h"
#include <stdexcept> 



namespace triangle {

    bool inequality_violation(double a, double b, double c){
        double sum = a + b + c;
        return sum - a < a || sum - b < b || sum - c < c;
    }
    
    bool all_zero(double a, double b, double c){
        return a == 0 && b == 0 && c == 0;
    }
    
    flavor kind(double a, double b, double c){
        if( inequality_violation(a, b, c) || all_zero(a, b, c)){
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
