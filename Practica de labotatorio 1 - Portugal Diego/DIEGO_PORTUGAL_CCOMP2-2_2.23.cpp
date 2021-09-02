#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2, numero3, numero4, numero5, mayor, menor;
    cout << "Ingrese el primer numero:" << endl;
    cin >> numero1;

    cout << "Ingrese el segundo numero:" << endl;
    cin >> numero2;

    cout << "Ingrese el tercer numero:" << endl;
    cin >> numero3;

    cout << "Ingrese el cuarto numero:" << endl;
    cin >> numero4;

    cout << "Ingrese el quinto numero:" << endl;
    cin >> numero5;

    if (numero1 >= numero2 && numero1 >= numero3 && numero1 >= numero4 && numero1 >= numero5){
       mayor=numero1;
        if (numero2 <= numero3 && numero2 <= numero4 && numero2 <= numero5){
            menor=numero2;
        }
        else if (numero3 <= numero2 && numero3 <= numero4 && numero3 <= numero5){
            menor=numero3;
        }
        else if (numero4 <= numero2 && numero4 <= numero3 && numero4 <= numero5){
            menor=numero4;
        }
        else{
            menor=numero5;
        }
    }

    else if (numero2 >= numero1 && numero2 >= numero3 && numero2 >= numero4 && numero2 >= numero5){
       mayor=numero2;

        if (numero1 <= numero3 && numero1 <= numero4 && numero1 <= numero5){
            menor=numero1;
        }
        else if (numero3 <= numero1 && numero3 <= numero4 && numero3 <= numero5){
            menor=numero3;
        }
        else if (numero4 <= numero1 && numero4 <= numero3 && numero4 <= numero5){
            menor=numero4;
        }
        else{
            menor=numero5;
        }
        }

    else if (numero3 >= numero1 && numero3 >= numero2 && numero3 >= numero4 && numero3 >= numero5){
       mayor=numero3;

       if (numero1 <= numero2 && numero1 <= numero4 && numero1 <= numero5){
            menor=numero1;
        }
        else if (numero2 <= numero1 && numero2 <= numero4 && numero2 <= numero5){
            menor=numero2;
        }
        else if (numero4 <= numero1 && numero4 <= numero2 && numero4 <= numero5){
            menor=numero4;
        }
        else{
            menor=numero5;
        }
    }
    else if (numero4 >= numero1 && numero4 >= numero2 && numero4 >= numero3 && numero4 >= numero5){
       mayor=numero4;

       if (numero1 <= numero2 && numero1 <= numero3 && numero1 <= numero5){
            menor=numero1;
        }
        else if (numero2 <= numero1 && numero2 <= numero3 && numero2 <= numero5){
            menor=numero2;
        }
        else if (numero3 <= numero1 && numero3 <= numero2 && numero3 <= numero5){
            menor=numero3;
        }
        else{
            menor=numero5;
        }
    }

    else if (numero5 >= numero1 && numero5 >= numero2 && numero5 >= numero3 && numero5 >= numero4){
       mayor=numero5;

       if (numero1 <= numero2 && numero1 <= numero3 && numero1 <= numero4){
            menor=numero1;
        }
        else if (numero2 <= numero1 && numero2 <= numero3 && numero2 <= numero4){
            menor=numero2;
        }
        else if (numero3 <= numero1 && numero3 <= numero2 && numero3 <= numero4){
            menor=numero3;
        }
        else{
            menor=numero4;
        }
    }

    cout << "El numero mayor es: " << mayor << endl;

    cout << "El numero menor es: " << menor << endl;

return 0;
}
