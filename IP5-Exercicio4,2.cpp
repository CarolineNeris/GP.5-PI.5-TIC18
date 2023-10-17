#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;

    double discriminante = b * b - 4 * a * c;


    if (discriminante > 0) {
        cout << "O polinômio tem duas raízes reais." << endl;
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    } else if (discriminante == 0) {
        cout << "O polinômio tem uma raiz real." << endl;
        double raiz = -b / (2 * a);
        cout << "Raiz: " << raiz << endl;
    } else {
        cout << "O polinômio não possui raízes reais." << endl;
    }

    double x;
    

    cout << "Digite o valor de x: ";
    cin >> x;


    double px = a * x * x + b * x + c;

    cout << "O valor de p(x) é: " << px << endl;

    return 0;
}
