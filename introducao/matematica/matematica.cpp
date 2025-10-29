// https://cplusplus.com/reference/cmath/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    long a = 9;
    long b = 4;
    long c = -3;
    double d = 7.109;
    
    // inclusos no próprio <iostream
    cout << min(a, b) << endl;
    cout << max(a, b) << endl;

    // inclusos no cmath
    cout << pow(a, b) << endl; // potência
    cout << sqrt(b) << endl; // raiz quadrada
    cout << abs(c) << endl; // módulo
    cout << round(d) << endl; // arredondar
    cout << ceil(d) << endl; // arredondar para cima
    cout << floor(d) << endl; // arredondar para baixo

    return 0;

}