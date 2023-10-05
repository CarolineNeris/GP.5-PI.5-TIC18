#include <iostream>

using namespace std;

int main() {
    int valor;
    string resultado;
    
    // Letra a
    cout << "Digite um numero inteiro: ";
    cin >> valor;

    // Letra b
    resultado = (valor > 32767 || valor < -32768) ? "e maior que um short int" : "este valor pertence ao intervalo dos short int";

    cout << "O valor fornecido " << valor << " " << resultado << endl;

    return 0;
}
