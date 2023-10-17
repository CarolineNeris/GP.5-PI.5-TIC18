#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, b, c;
    

    cout << "Digite o valor de a: ";
    cin >> a;
    
    cout << "Digite o valor de b: ";
    cin >> b;
    

    c = a + b;
    cout << "Soma de a e b em formato hexadecimal: 0x" << hex << c << endl;
    

    c = a * b;
    cout << "Produto de a e b em formato octal: 0" << oct << c << endl;
    

    c = (a > b) ? (a - b) : (b - a);
    cout << "Valor absoluto da diferença entre a e b: " << c << endl;
    

    if (b != 0) {
        c = a / b;
        cout << "Quociente entre a e b: " << c << endl;
        

        if (a % b == 0) {
            cout << "a é divisível por b de forma exata." << endl;
        } else {
            cout << "a não é divisível por b de forma exata." << endl;
        }
    } else {
        cout << "Divisão por zero não é possível." << endl;
    }
    
    return 0;
}
