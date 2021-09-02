#include <iostream>

using namespace std;

int main()
{
float peso, altura, imc;
    cout << "Ingrese su peso en KILOGRAMOS:" << endl;
    cin >> peso;
    cout << "Ingrese su altura en METROS:" << endl;
    cin >> altura;

imc = peso/(altura*altura);

    cout << "Su indice de masa corporal es:"<< imc<<endl;
    cout << endl;
    cout <<"VALORES DE IMC"<<endl;
    cout <<"Bajo peso: Menor a 18.5"<<endl;
    cout <<"Normal   : Menor a 18.5"<<endl;
    cout <<"Sobrepeso: Menor a 18.5"<<endl;
    cout <<"Obesidad : Menor a 18.5"<<endl;


    return 0;
}
