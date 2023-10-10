#include <iostream>
#include <climits> 

using namespace std;

int main() {
   
    int number;
    cout << "Digite um número inteiro: ";
    cin >> number;

    
    string result = (number > SHRT_MAX || number < SHRT_MIN) ? "é maior que um short int" : "este valor pertence ao intervalo dos short int";

    cout << number << " " << result << "." << endl;

    return 0;
}
