#include<iostream>


using namespace std;

int main(){
   // Letra a
   char ch1, ch2, ch3;
    
    
    // Letra b
    cout << "Digite um caractere: ";
    cin >> ch1;

    // Letra c
    /* ch1 = (ch1 >= 'A' && ch1 <= 'Z') ? 'M' : 
                         (ch1 >= 'a' && ch1 <= 'z') ? 'm' : 
                         (ch1 >= '0' && ch1 <= '9') ? 'd' : 'o';
 
    if (ch1 == 'M') {
        cout << "O caractere digitado eh uma letra maiuscula." << endl;
    } else if (ch1 == 'm') {
        cout << "O caractere digitado eh uma letra minuscula." << endl;
    } else if (ch1 == 'd') {
        cout << "O caractere digitado eh um digito." << endl;
    } else {
        cout << "O caractere digitado eh de outro tipo." << endl;
    }*/
    
    // Letra d
    
    if (isupper(ch1)) {
        cout << "Voce digitou uma letra maiuscula." << endl;
    } else if (islower(ch1)) {
        cout << "Voce digitou uma letra minuscula." << endl;
    } else if (isdigit(ch1)) {
        cout << "Voce digitou um digito." << endl;
    } else {
        cout << "Voce digitou outro tipo de caractere." << endl;
    }

   
    // Letra e
    ch2 = 81;
    cout << "ch2 em decimal: " << int(ch2) << endl;
    cout << "ch2 em octal: " << oct << int(ch2) << endl;
    cout << "ch2 em hexadecimal: " << hex << int(ch2) << endl;
    cout << "ch2 como caractere: " << ch2 << endl;

    // Letra f
    ch3 = ch2 + 32; 

 
    cout << "ch3 em decimal: " << int(ch3) << endl;
    cout << "ch3 em octal: " << oct << int(ch3) << endl;
    cout << "ch3 em hexadecimal: " << hex << int(ch3) << endl;
    cout << "ch3 como caractere: " << ch3 << endl;


   
    return 0;
}