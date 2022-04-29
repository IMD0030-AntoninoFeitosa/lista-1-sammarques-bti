#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int n[SIZE] = {0,0,0,0,0};
    int count = 0;

    for (int i=0; i<5;i++) { // deveria ser usada a constante
        cin >> n[i];
        if(n[i]<0){
            count++;
        }
    }

    cout << count;

    return 0;
}
