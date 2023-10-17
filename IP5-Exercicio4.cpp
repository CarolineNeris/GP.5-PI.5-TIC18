#include <iostream>
#include <cmath>


using namespace std;

int main() {
    double x, y, z;

    // Solicite ao usuário para digitar dois números de ponto flutuante
    cout << "Digite o valor de x (coordenada x): ";
    cin >> x;
    cout << "Digite o valor de y (coordenada y): ";
    cin >> y;


    double fx = 5 * x + 2;


    if (y > fx) {
        cout << "O ponto (" << x << ", " << y << ") está acima da curva f(x) = 5x + 2." << endl;
    } else if (y < fx) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da curva f(x) = 5x + 2." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está na curva f(x) = 5x + 2." << endl;
    }


    z = sqrt(x * x + y * y);
    cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é: " << z << endl;


    double produto = x * y;
    cout << "O produto de x e y em notação científica é: " << scientific << produto << endl;

    return 0;
}
