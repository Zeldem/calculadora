#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    int r;

    cout << "Ingrese el primer numero" << endl;
    cin >> a;
    cout << "Ingrese el segundo numero" << endl;
    cin >> b;
    cout << "1.SUMA  2.RESTA  3.MULTIPLICACION  4.DIVISION  5.MODULO" << endl;
    cin >> r;
    switch(r){
case 1:
    cout << a+b;
    break;
case 2:
    cout << a-b;
    break;
case 3:
    cout << a*b;
case 4:
    if(b!=0){
        cout << a/b;
    }else{
    cout << "Segundo numero invalido" << endl;
    }
    break;
case 5:
    if(b!=0){
        cout << int(a)%int(b);
    }else{
    cout << "Segundo numero invalido" << endl;
    }
    break;
default:
    cout<<"operacion no disponible"<<endl;
    break;
    }
    return 0;
}
