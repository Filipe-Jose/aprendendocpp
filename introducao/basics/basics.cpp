#include <iostream>

using string = std::string ; //typedef std::string string;

namespace um {
    string nome = "Manuela";
}

namespace dois {
    string nome = "João";
}

int main() {

    string nome = "Filipe";
    const double PI = 3.14159265358979323846;
    
    std::cout << "Significa char output " << std::endl;

    using std::cout;

    cout << "Olá, " << nome << ".\n";
    cout << "Olá, " << um::nome << ".\n";
    cout << "Olá, " << dois::nome << ".\n";
    
    return 0;

}