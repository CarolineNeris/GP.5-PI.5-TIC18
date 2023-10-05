#include <iostream>
#include <cmath> // Inclua a biblioteca cmath para usar sqrt

using namespace std;

int main() {
    double a, b, c, discriminante;
    int num_raizes;

    // Letra a 
    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;
    cout << "Digite o coeficiente c: ";
    cin >> c;

    //  Determinar o número de raízes reais
     discriminante = b * b - 4 * a * c;
  

    if (discriminante > 0) {
        num_raizes = 2;
    } else if (discriminante == 0) {
        num_raizes = 1;
    } else {
        num_raizes = 0;
    }

    cout << "O polinômio p(x) = " << a << "x^2 + " << b << "x + " << c << " tem " << num_raizes << " raizes reais." << endl;

    //  Se houver raizes, imprima seus valores
    if (num_raizes > 0) {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        cout << "Raiz 1: " << raiz1 << endl;

        if (num_raizes == 2) {
            double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
            cout << "Raiz 2: " << raiz2 << endl;
        }
    }

    // Letra b - Ler um valor para x e calcular p(x)
    double x;
    cout << "Digite o valor de x: ";
    cin >> x;

    double px = a * x * x + b * x + c;
    cout << "p(x) = " << px << endl;

    return 0;
}
