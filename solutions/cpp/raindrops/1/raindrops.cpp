#include "raindrops.h"
#include <string>

using namespace std;

namespace raindrops {
    string convert(int num){
        string result;
        bool divisible = false;
        
        if(num % 3 == 0){
            result += "Pling";
            divisible = true;
        } 
        
        if(num % 5 == 0){
            result += "Plang";
            divisible = true;
        }

        if(num % 7 == 0){
            result += "Plong";
            divisible = true;
        }

        if(!divisible){
            result = to_string(num);
        }

        return result;
    }
}  // namespace raindrops
