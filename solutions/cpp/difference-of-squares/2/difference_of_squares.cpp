#include "difference_of_squares.h"

namespace difference_of_squares {
    
    int sum_of_n(int N){
        if(N <= 1) return 1;
        return N + sum_of_n(N-1);
    }
    
    int square_of_sum(int N){
        return sum_of_n(N) * sum_of_n(N);
    }
    
    int sum_of_squares(int N){
        if(N <= 1) return 1;
        return N*N + sum_of_squares(N-1);
        
    }
    
    int difference(int N){
        return square_of_sum(N) - sum_of_squares(N);
    }

}  // namespace difference_of_squares
