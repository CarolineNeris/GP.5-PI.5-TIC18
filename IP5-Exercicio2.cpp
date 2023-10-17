#include <iostream>
using namespace std;

int main() {

    char ch1, ch2, ch3;


    cout << "Digite um caractere: ";
    cin >> ch1;


    if (isupper(ch1)) {
        cout << "É uma letra maiúscula." << endl;
    } else if (islower(ch1)) {
        cout << "É uma letra minúscula." << endl;
    } else if (isdigit(ch1)) {
        cout << "É um dígito." << endl;
    } else {
        cout << "É outro tipo de caractere." << endl;
    }

    // Atribuir o valor 81 a ch2
    ch2 = 81;

    // Imprimir ch2 em formatos numérico decimal, octal, hexadecimal e como caractere
    cout << "ch2 em decimal: " << int(ch2) << endl;
    cout << "ch2 em octal: " << oct << int(ch2) << endl;
    cout << "ch2 em hexadecimal: " << hex << int(ch2) << endl;
    cout << "ch2 como caractere: " << ch2 << endl;

    // Atribuir à ch3 a letra minúscula correspondente
    ch3 = tolower(ch2);

    // Imprimir ch3 em formatos numérico decimal, octal, hexadecimal e como caractere
    cout << "ch3 em decimal: " << int(ch3) << endl;
    cout << "ch3 em octal: " << oct << int(ch3) << endl;
    cout << "ch3 em hexadecimal: " << hex << int(ch3) << endl;
    cout << "ch3 como caractere: " << ch3 << endl;

    return 0;
}
