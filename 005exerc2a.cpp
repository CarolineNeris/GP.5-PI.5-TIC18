#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    char ch1, ch2, ch3;

    cout<<"Digite um caracter: ";
    cin>>ch1;

    ch1>='A'&&ch1<='Z'?cout<<"Maiusculo"<<endl:
        ch1>='a'&&ch1<='z'?cout<<"Minusculo"<<endl:
            ch1>'Z'&&ch1<'a'||ch1>'z'?cout<<"Um digito"<<endl:
                cout<<"outro tipo de caracter"<<endl;

    isupper(ch1)?cout<<"Maiusculo"<<endl:
            islower(ch1)?cout<<"Minusculo"<<endl:
                isprint(ch1)?cout<<"Um digito"<<endl:
                    cout<<"outro tipo de caracter"<<endl;
    ch2=81;
    cout<<showbase<<dec<<(int)ch2<<endl;
    cout<<showbase<<oct<<(int)ch2<<endl;
    cout<<showbase<<hex<<(int)ch2<<endl;
    cout<<showbase<<ch2<<endl;
    return 0;
}