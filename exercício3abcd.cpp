#include <iostream>
using namespace std;

int a, b, c; 
int main() {

    cout << "Forneça dois números separados por espaço: ";
    cin >> a >> b; 

    c = a + b; 

    cout << "A soma dos dois números em hexadecimal é: " << hex << c << endl; //tá gerando resultado errado, preciso rever 
    cout << "A soma dos dois números é: " << dec << c << endl;

    c = a * b;

    cout << "O produto dos dois números em octal é: " << oct << c << endl;
    cout << "O produto dos dois números é: " << dec << c << endl;
     
     c = abs(a - b);

    cout << "O módulo da diferença entre os dois números é: " << c << endl;

     c = (b == 0) ? 0 : a / b; 

    if (b == 0) {
        cout << "A divisão por zero não é possível. Por favor, forneça um valor diferente de zero para b." << endl;
    } else {
        int quociente = a / b;
        int resto = a % b;

        cout << "O quociente da divisão de a por b é: " << quociente << endl;

        if (resto == 0) {
            cout << "a é divisível de forma exata por b." << endl;
        } else {
            cout << "a não é divisível de forma exata por b." << endl;
        }
    }


       return 0;
}
