#include <iostream>
using namespace std;

int main() {
    int valor;
    cout << "Forneça um número inteiro: ";
    cin >> valor;

    // Use o operador condicional para verificar se o valor está no intervalo de short int
    cout << "O valor fornecido (" << valor << ") " << ((valor >= -32768 && valor <= 32767) ? "pertence ao intervalo dos short int." : "é maior que um short int.") << endl;

    return 0;
}
