#include<iostream>
#include <cmath>

using namespace std;

int main(void){
    int a, b, c;

    cout << "Digite um numero inteiro : " << endl;
    cin >> a;
    cout << "Digite outro numero inteiro : " << endl;
    cin >> b;
    
    c = a + b;
    cout << "A soma de a e b em formato hexadecimal: 0x" << hex << c << endl;

    c = a * b;
    cout << "O produto de a e b em formato octal: " << oct << c << endl;

    c = abs(a - b); 
    cout << "O modulo da diferenca entre a e b: " << c << endl;

    if (b == 0) {
        cout << "Divisao por zero nao eh possivel." << endl;
    } else {
        c = a / b;
        cout << "O quociente entre a e b: " << c << endl;
    }
    return 0;
}