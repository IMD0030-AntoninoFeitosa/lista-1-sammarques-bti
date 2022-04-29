#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> vec;

    for ( int i = 0; i<n; i++){
        if(i==0 || i==1){
            vec.push_back(1);
        } else {
            vec.push_back(vec[i-1] + vec[i-2]);
        }
    }

    return vec;
}
