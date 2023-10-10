 #include <iostream>
#include <iomanip>  
#include <cmath>    

using namespace std;

int main() {
    
    int a, b, c;

    cout << "Digite dois números inteiros (a e b): ";
    cin >> a >> b;

    c = a + b;
    cout << "A soma de a + b em hexadecimal é: " << hex << c << endl;

    c = a * b;
    cout << "O produto de a * b em octal é: " << oct << c << endl;

    c = (a - b) < 0 ? -(a - b) : (a - b);
    cout << "O módulo da diferença entre a e b é: " << dec << c << endl;

    c = abs(a - b); 
    cout << "O módulo da diferença entre a e b (usando abs) é: " << c << endl;

       if (b != 0) {
        c = a / b;
        cout << "O quociente da divisão de a por b é: " << c << endl;

        if (a % b == 0) {
            cout << "a é divisível de forma exata por b." << endl;
        } else {
            cout << "a não é divisível de forma exata por b." << endl;
        }
    } else {
        cout << "Divisão por zero não é possível." << endl;
    }

    return 0;
}
