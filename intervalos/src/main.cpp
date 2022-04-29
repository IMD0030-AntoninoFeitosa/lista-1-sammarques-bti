/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    
    int interval[5] = {0,0,0,0,0};
    int x;

    while( cin >> std::ws >> x) {
      if (x>=0 && x<25){
        interval[0]++;
      } else if (x>=25 && x<50){
        interval[1]++;
      } else if (x>=50 && x<75){
        interval[2]++;
      } else if (x>=75 && x<100){
        interval[3]++;
      } else {
        interval[4]++;
      } 
    }

    for (int i = 0; i < 5; ++i) {
        cout << std::setprecision(4) << (static_cast<double> (100*interval[i])/(static_cast<double>(interval[0]+interval[1]+interval[2]+interval[3]+interval[4]))) << "\n";
    }

    return 0;
}
