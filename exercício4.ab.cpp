#include <iostream>
#include <cmath> // Para a função sqrt
using namespace std;

int main() {
    double a, b, c;

    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;
    cout << "Digite o coeficiente c: ";
    cin >> c;

    double discriminante = b * b - 4 * a * c; // Calcula o discriminante

    if (discriminante > 0) {
        cout << "O polinômio tem duas raízes reais." << endl;
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "As raízes são: " << raiz1 << " e " << raiz2 << endl;
    } else if (discriminante == 0) {
        cout << "O polinômio tem uma raiz real." << endl;
        double raiz = -b / (2 * a);
        cout << "A raiz é: " << raiz << endl;
    } else {
        cout << "O polinômio não possui raízes reais." << endl;
    }

    double x;
    cout << "Digite o valor de x: ";
    cin >> x;

    double resultado = a * x * x + b * x + c;
    cout << "O valor de p(x) é: " << resultado << endl;

    return 0;
}
