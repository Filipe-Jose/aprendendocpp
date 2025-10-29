#include <iostream>

using namespace std;

void idade() {

    int idade;

    cout << "Insira sua idade: ";
    cin >> idade;

    if (idade >= 18) {
        cout << "Você já pode dirigir!\n";
    } else if (idade >= 0) {
        cout << "Você ainda não pode dirigir!\n";
    } else {
        cout << "Você nem nasceu ainda!\n";
    }

    idade % 2 == 0 ? cout << "Sua idade é um número par!" : cout << "Sua idade é um número ímpar!";

}


void loops();


int main() {

    int opcao;

    cout << "O que você quer ver? Insira o número compatível com a opção:\n";
    cout << "1. Idade\n";
    cout << "2. Loops\n";
    cin >> opcao;

    switch (opcao) {
        case 1:
            idade();
            break;
        case 2:
            loops();
            break;
        default:
            cout << "Opção não reconhecida.";
    }


    return 0;
}


void loops() {

    int n = 10;
    while (n >= 0) {
        cout << n << endl;
        n--;
    }

    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }

    int x;
    do {
        cout << "Insira o número 9: ";
        cin >> x;
    } while (x != 9);

}