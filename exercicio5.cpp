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

    // Letra c
    // Quando o valor digitado para informacao_genetica é maior que 8, não é pedido ao usuário para digitar o valor a ser atribuido
    //na variavel numero_gene_verificar, indo direto para cout << "Numero de gene invalido. Digite um numero entre 1 e 8." << endl;
    int numero_gene_verificar;
    cout << "Digite o numero do gene que voce deseja verificar (entre 1 e 8): ";
    cin >> numero_gene_verificar;

    if (numero_gene_verificar >= 1 && numero_gene_verificar <= 8) {
        bool esta_presente = ((informacao_genetica >> (numero_gene_verificar - 1)) & 1) != 0;
        if (esta_presente) {
            cout << "O gene " << numero_gene_verificar << " esta presente nesta planta." << endl;
        } else {
            cout << "O gene " << numero_gene_verificar << " nao esta presente nesta planta." << endl;
        }
    } else {
        cout << "Numero de gene invalido. Digite um numero entre 1 e 8." << endl;
    }
    return 0;
}
