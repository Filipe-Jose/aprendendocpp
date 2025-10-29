#include <iostream>

using namespace std;

int main() {

    // Not: operação unária que inverte os bits : 1 vira 0 e vice-versa
    int result_not = ~5; // result will be -6 (1111 1010)
    cout << "Resultado do ~ = " << result_not << endl;

    // Operações binárias:
    // And: transforma o bit em 0 quando ambos da mesma posição são 0 e em 1 quando ambos são 1
    int result_and = 5 & 3; // result will be 1 (0000 0101 & 0000 0011 = 0000 0001)
    cout << "Resultado do & = " << result_and << endl;

    // Or: transforma o bit em 0 quando ambos da mesma posição são 0 e em 1 quando ao menos um é 1
    int result_or = 5 | 3; // result will be 7 (0000 0101 | 0000 0011 = 0000 0111)
    cout << "Resultado do | = " << result_or << endl;

    // Xor: transforma o bit em 1 quando ambos da mesma posição são diferentes
    int result_xor = 5 ^ 3; // result will be 6 (0000 0101 ^ 0000 0011 = 0000 0110)
    cout << "Resultado do ^ = " << result_xor << endl;

    // Left shift: move todos os bits do número 5 em 1 unidade para esquerda, preenchendo o resto com 0
    int result_left_shift = 5 << 1; // result will be 10 (0000 0101 << 1 = 0000 1010)
    cout << "Resultado do << = " << result_left_shift << endl;

    // Right shift: move todos os bits do número 5 em 1 unidade para direita, preenchendo o resto com 0
    int result_right_shift = 5 >> 1; // result will be 2 (0000 0101 >> 1 = 0000 0010)
    cout << "Resultado do >> = " << result_right_shift << endl;

    return 1;

}