#include "difference_of_squares.h"

namespace difference_of_squares {

    int square_of_sum(int N){
        int sum{0};
        
        for(int i = 1; i <= N; i++){
            sum += i;    
        }

        return sum * sum;
    }
    
    int sum_of_squares(int N){
        int sum{0};
        
        for(int i = 1; i <= N; i++){
            sum += i*i;    
        }

        return sum;
        
    }
    
    int difference(int N){
        return square_of_sum(N) - sum_of_squares(N);
    }

}  // namespace difference_of_squares
