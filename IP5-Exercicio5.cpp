#include <iostream>

using namespace std;

int main() {

    unsigned char informacaoGenetica;
    cout << "Digite a informação genética da planta (um número entre 0 e 8): ";
    cin >> informacaoGenetica;

    int genesPresentes = 0;

    cout << "Informação genética em forma binária: ";
    for (int i = 7; i >= 0; i--) {
        cout << ((informacaoGenetica >> i) & 1);
        if ((informacaoGenetica >> i) & 1) {
            genesPresentes++;
        }
    }
    cout << endl;


    cout << "Número de genes presentes: " << genesPresentes << endl;

    int geneEspecifico;
    cout << "Digite o número do gene que deseja verificar (entre 1 e 8): ";
    cin >> geneEspecifico;

    if (geneEspecifico >= 1 && geneEspecifico <= 8) {
        bool geneEstaPresente = (informacaoGenetica >> (geneEspecifico - 1)) & 1;
        if (geneEstaPresente) {
            cout << "O gene " << geneEspecifico << " está presente nesta planta." << endl;
        } else {
            cout << "O gene " << geneEspecifico << " não está presente nesta planta." << endl;
        }
    } else {
        cout << "Número de gene inválido. Deve estar entre 1 e 8." << endl;
    }

    return 0;
}
