#include <iostream>
using namespace std;
int main() {
    char ch2 = 81;

    // Imprimir o valor em formato decimal
    cout << "Valor em formato decimal: " << static_cast<int>(ch2) << endl;

    // Imprimir o valor em formato octal
    cout << "Valor em formato octal: " << oct << static_cast<int>(ch2) << endl;

    // Imprimir o valor em formato hexadecimal
    cout << "Valor em formato hexadecimal: " << hex << static_cast<int>(ch2) << endl;

    // Imprimir o caractere
    cout << "Como caractere: " << ch2 << endl;

    return 0;
}
//obs: Usamos static_cast<int>(ch2) para converter ch2 em um valor inteiro 
//para que possamos imprimir em formato decimal, octal e hexadecimal.