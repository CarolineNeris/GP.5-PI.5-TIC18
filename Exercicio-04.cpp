#include <iostream>
#include <cmath>  

using namespace std;

int main() {
   
    double x, y, z;

    cout << "Digite dois números de ponto flutuante (x e y): ";
    cin >> x >> y;

    double valueOnCurve = 5*x + 2;

    if (y > valueOnCurve) {
        cout << "O ponto (" << x << ", " << y << ") está à direita da curva f(x) = 5x + 2." << endl;
    } else if (y < valueOnCurve) {
        cout << "O ponto (" << x << ", " << y << ") está à esquerda da curva f(x) = 5x + 2." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está na curva f(x) = 5x + 2." << endl;
    }

    z = sqrt(x*x + y*y);
    cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é: " << z << endl;

    z = x * y;
    cout << "O produto de x e y em notação científica é: " << scientific << z << endl;

    return 0;
}
