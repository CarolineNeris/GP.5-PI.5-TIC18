#include <iostream>
using namespace std;
char ch1, ch2, ch3; // Letra a - Declaração das variáveis char

int main() {
    
      
    cout << "Digite um caractere: "; // Letra b - Pedir ao usuário para digitar um caractere
    cin >> ch1;

    
    ch1 = (ch1 >= 'A' && ch1 <= 'Z') ? 'M' : // Letra c - Verificar o tipo de caractere usando o operador condicional
          (ch1 >= 'a' && ch1 <= 'z') ? 'm' : // Criamos um codicional dentro do outro
          (ch1 >= '0' && ch1 <= '9') ? 'd' : 'o'; 

    
    switch (ch1) {      // Exibir o resultado
        case 'M':
            cout << "Você digitou uma letra maiúscula." << endl;
            break;
        case 'm':
            cout << "Você digitou uma letra minúscula." << endl;
            break;
        case 'd':
            cout << "Você digitou um dígito." << endl;
            break;
        default:
            cout << "Você digitou outro tipo de caractere." << endl;
            break;
    }

    return 0;
}
