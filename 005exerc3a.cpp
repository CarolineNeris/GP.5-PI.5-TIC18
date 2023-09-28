#include <iostream>

using namespace std;

int main(){

    int a,b,c;

    cout<<"Digite dois valores inteiros: ";
    cin>>a>>b;

    //cout<<a<<endl;
    //cout<<b<<endl;

    c=a+b;
    cout<<showbase<<hex<<c<<endl;

    c=a*b;
    cout<<showbase<<oct<<c<<endl;
    return 0;
}