#include <iostream>
#include <cctype>
using namespace std;
char ch1;

int main() {
   
    cout << "Digite um caractere: ";
    cin >> ch1;

    if (isupper(ch1)) {
        cout << "Você digitou uma letra maiúscula." << endl;
    } else if (islower(ch1)) {
        cout << "Você digitou uma letra minúscula." << endl;
    } else if (isdigit(ch1)) {
        cout << "Você digitou um dígito." << endl;
    } else {
        cout << "Você digitou outro tipo de caractere." << endl;
    }

    return 0;
}

//Usamos a função 'isupper' da biblioteca '<cctype>' para verificar se o caractere é uma letra maiúscula
//Depois a função 'islower' da mesma biblioteca para verificar se o caractere é uma letra minuscula 
//Depois a função 'isdigit' da mesma biblioteca para verificar se o caractere é um dígito