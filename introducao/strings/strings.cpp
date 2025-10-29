#include <iostream>

using namespace std;

int main () {

    string nome;
    cout << "Insira seu nome: ";
    getline(cin, nome);

    cout << nome.length() << endl;
    cout << nome.empty() << endl;
    cout << nome.append(" Camargo") << endl;
    cout << nome.at(1) << endl;
    cout << nome.insert(0, "Nome: ") << endl;
    cout << nome.find(" ") << endl;
    cout << nome.erase(1, 3) << endl;

    nome.clear();
    cout << nome << endl;


    return 0;

}