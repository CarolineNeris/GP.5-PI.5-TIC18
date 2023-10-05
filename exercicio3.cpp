#include<iostream>

using namespace std;

int main(void){
    int a, b, c;

    cout << "Digite um numero inteiro : " << endl;
    cin >> a;
    cout << "Digite outro numero inteiro : " << endl;
    cin >> b;
    
    c = a + b;
    cout << "A soma de a e b em formato hexadecimal: 0x" << hex << c << endl;
    
    return 0;
}