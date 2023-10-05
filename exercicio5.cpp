#include <iostream>

using namespace std;

int main() {
    // Letra a 
    unsigned char informacao_genetica;
    int genes_presentes = 0;

    cout << "Digite a informacao genetica da planta (um numero entre 0 e 255): ";
    cin >> informacao_genetica;
    // Letra b 
    for (int i = 0; i < 8; i++) {
        if ((informacao_genetica & (1 << i)) != 0) {
            genes_presentes++;
        }
    }

    cout << "A planta possui " << genes_presentes << " genes presentes." << endl;

    

    

    return 0;
}
