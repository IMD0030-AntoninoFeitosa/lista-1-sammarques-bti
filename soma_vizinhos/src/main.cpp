/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    
    int m, n, aux;
    int count = 0;

    cin >> m;
    cin >> n;


    if (n < 0) {
        for(int i = n; i<0; i++){
            count=count+m;
            m = m - 1;
        }
    } else if (n>0) {
        cout << "Loop 2\n";
        for(int i = 0; i<n; i++){
            count=count+m;
            m = m + 1;
        }
    } else {
        count = m;
    }

    cout << count << "\n";

    return 0;
}
