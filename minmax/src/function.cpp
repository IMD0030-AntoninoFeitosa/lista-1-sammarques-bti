#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{
    // faltou tratar o caso n==0 retornando {-1,-1}
    int max = 0;
    int min = 0;

    for (int i = 1; i<n; i++) {
        std::cout << "I: " << i << endl; // funções não devem exibir informações, eles devem ser reutilizáveis
        if (V[i]>=V[max]){
            max = i;
            //cout << "Encontrou um novo máximo" << endl;
        }
        if (V[min]>V[i]){
            min = i;
            //cout << "Encontrou um novo mínimo" << endl;
        }
    }

    return { min, max };
}

// não deveria ter uma função main
int main(void) {
    //std::vector<int> vec;
    pair<int,int> p;
    int V[] = {5,4,1,3,1,10,7,10,6,8};

    

    p = min_max(V,10);  

    cout << "min: "<< p.first << "max: " << p.second;

    return 0;
}
