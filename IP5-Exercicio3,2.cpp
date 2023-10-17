#include <iostream>
#include <climits> 

using namespace std;

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero >= SHRT_MIN && numero <= SHRT_MAX) {
        cout << "Este valor pertence ao intervalo dos short int" << endl;
    } else {
        cout << "E maior que um short int" << endl;
    }

    return 0;
}
