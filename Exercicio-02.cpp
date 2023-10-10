#include <iostream>
#include <cctype>  

using namespace std;

int main() {

    char ch1, ch2, ch3;

    cout << "Digite um caractere: ";
    cin >> ch1;

    cout << "O caractere '" << ch1 << "' é: ";
    if (isupper(ch1)) {
        cout << "uma letra maiúscula" << endl;
    } else if (islower(ch1)) {
        cout << "uma letra minúscula" << endl;
    } else if (isdigit(ch1)) {
        cout << "um dígito" << endl;
    } else {
        cout << "outro tipo de caractere" << endl;
    }

    ch2 = 81;
    cout << endl << "ch2 (caractere 81) em diferentes formatos: " << endl;
    cout << "Decimal: " << static_cast<int>(ch2) << endl;
    cout << "Octal: " << oct << static_cast<int>(ch2) << endl;
    cout << "Hexadecimal: " << hex << static_cast<int>(ch2) << endl;
    cout << "Como caractere: " << ch2 << endl;

    ch3 = ch2 + ('a' - 'A');
    cout << endl << "ch3 (correspondente minúsculo de ch2) em diferentes formatos: " << endl;
    cout << "Decimal: " << dec << static_cast<int>(ch3) << endl;
    cout << "Octal: " << oct << static_cast<int>(ch3) << endl;
    cout << "Hexadecimal: " << hex << static_cast<int>(ch3) << endl;
    cout << "Como caractere: " << ch3 << endl;

    return 0;
}
