#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    
    double a, b, c;

    cout << "Insira os coeficientes a, b e c (separados por espaço): ";
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        cout << "O polinômio tem duas raízes reais diferentes." << endl;
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Raízes: " << x1 << " e " << x2 << endl;
    } else if (delta == 0) {
        cout << "O polinômio tem uma única raiz real." << endl;
        double x1 = -b / (2 * a);
        cout << "Raiz: " << x1 << endl;
    } else {
        cout << "O polinômio não tem raízes reais." << endl;
    }

    double x;
    cout << "\nInsira um valor para x: ";
    cin >> x;

    double p = a * x * x + b * x + c;
    cout << "p(" << x << ") = " << p << endl;

    return 0;
}
