#include <iostream>

using namespace std;

int main(){

    char ch1, ch2, ch3;

    cout<<"Digite um caracter: ";
    cin>>ch1;

    //cout<<
        ch1>='A'&&ch1<='Z'?cout<<"Maiusculo"<<endl:
            ch1>='a'&&ch1<='z'?cout<<"Minusculo"<<endl:
                ch1>'Z'&&ch1<'a'||ch1>'z'?cout<<"Um digito"<<endl:
                    cout<<"outro tipo de caracter"<<endl;
    //<<endl;
    return 0;
}