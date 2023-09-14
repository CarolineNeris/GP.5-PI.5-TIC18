#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;

    cout << "Digite a coordenada x: ";
    cin >> x;

    cout << "Digite a coordenada y: ";
    cin >> y;

    double fx = 5 * x + 2; // Calculando o valor de f(x) para dado x

    if (y > fx) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da curva." << endl;
    } else if (y < fx) {
        cout << "O ponto (" << x << ", " << y << ") está acima da curva." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está na curva." << endl;
    }

    // Para calculaar a distância euclidiana do ponto ao centro de coordenadas
    double distancia = sqrt(x * x + y * y);

    cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é: " << distancia << endl;

    // Calculando o produto entre as variáveis x e y e imprime em notação científica
    double produto = x * y;

    cout << "O produto de x e y em notação científica é: " << scientific << produto << endl;

    // Calcula o produto entre as variáveis x e y e imprime em notação científica
    double produto = x * y;

    cout << "O produto de x e y em notação científica é: " << scientific << produto << endl;

    return 0;
}
