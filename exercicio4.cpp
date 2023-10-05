#include<iostream>

using namespace std;

int main() {
    // Letra a
    double x, y, z, func1;

    // Letra b
    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    // Letra c - Identificar a posição em relação à curva f(x) = 5x + 2
    func1 = 5 * x + 2;

    if (y < func1) {
        cout << "O ponto (" << x << ", " << y << ") esta abaixo da curva f(x) = 5x + 2." << endl;
    } else if (y > func1) {
        cout << "O ponto (" << x << ", " << y << ") esta acima da curva f(x) = 5x + 2." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") esta na curva f(x) = 5x + 2." << endl;
    }

    return 0;
}
