#include <iostream>
using namespace std;

int main() {
    unsigned char planta;
    int contador = 0;
    int gene;

    cout << "Informe a informação genética da planta (um valor entre 1 e 8): ";
    cin >> planta;

    for (int i = 0; i < 8; i++) {
        if (planta & (1 << i)) {
            contador++;
        }
    }
    cout << "Número de genes presentes: " << contador << endl;

    cout << "Informe qual gene (entre 1 e 8) você deseja obter informação: ";
    cin >> gene;

    if (gene < 1 || gene > 8) {
        cout << "Número de gene inválido!" << endl;
        return 1;
    }

    if (planta & (1 << (gene - 1))) {
        cout << "O gene " << gene << " está presente nesta planta." << endl;
    } else {
        cout << "O gene " << gene << " não está presente nesta planta." << endl;
    }

    return 0;
}
