#include <iostream>
#include <cctype>
using namespace std;
char ch2;

int main() {
    

    cout << "Digite uma letra maiúscula: ";
    cin >> ch2;

    if (isupper(ch2)) {
        
        char ch3 = (ch2 + 32); // Convertendo para minúscula manualmente

        
        cout << "Caractere em formato decimal: " << static_cast<int>(ch3) << endl;
        cout << "Caractere em formato octal: " << oct << static_cast<int>(ch3) << endl;
        cout << "Caractere em formato hexadecimal: " << hex << static_cast<int>(ch3) << endl;
        cout << "Caractere convertido minúsculo: " << ch3 << endl;
    } else {
        cout << "O caractere fornecido não é uma letra maiúscula." << endl;
    }

    return 0;
}
