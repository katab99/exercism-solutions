#include "darts.h"
#include <cmath>
using namespace std;

namespace darts {

    int score(double x, double y){
        double dist = sqrt(x * x + y * y);

        if(dist > 10.0){
            return 0;
        }else if(dist > 5.0){
            return 1;
        }else if(dist > 1.0){
            return 5;
        }else{
            return 10;
        }
    }
    
}  // namespace darts