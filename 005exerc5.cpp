#include<iostream>

using namespace std;

int main() {
    unsigned char genes, teste;
    int presente=0;
    cout<<"Digite a informação genética da planta: ";
    //getline(cin >> ws, genes);
    cin>>genes;
    teste=genes;
    cout<<"Digitado: "<< static_cast<char>(genes)<<" | "<<static_cast<int>(genes)<<endl;
    for(int i = 7; i >= 0; i--) {
    // Executa a operação shift right até a última posição da direita para cada bit.

        if(genes & 1) {
            cout<<"1 ";//<< genes<<"'";
            presente++;
        }else{
            cout<<"0 ";//<< genes;
        }
        genes = genes >> 1;

    }
    cout<<endl;
    cout<<"Presentes: "<< presente<<endl<<endl;
    cout<<"Sobre qual gene específico desejas a informação? ";
    //getline(cin >> ws, presente);
    cin>>presente;
    presente--;
     //printf("Aqui: %d\n",presente<<1);
    presente<<1;
    if (teste&(presente<<1)){
        cout<<"Esse gene se encontra na planta"<<endl;
    }else{
        cout<<"está não"<<endl;
    }
//printf("\n");
    return 0;
}