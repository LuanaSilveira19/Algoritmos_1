#include<iostream>
using namespace std;
//Escreva um algoritmo que leia tr�s n�meros: A, B e C. Encontrar e mostrar o maior, o menor e o do
//meio entre os tr�s n�meros. Mostre os n�meros em ordem crescente.
main()
{
    setlocale(LC_ALL, "portuguese");
    int a= 0, b= 0, c= 0, temp= 0;

    cout<<"Informe o primeiro n�mero: ";
    cin>> a;

      cout<<"Informe o segundo n�mero: ";
    cin>> b;

      cout<<"Informe o terceiro n�mero: ";
    cin>> c;

    if (b < a) {
        temp = a;
        a = b;
        b = temp;
    }
     if (c < a) {
        temp = a;
        a = c;
        c = temp;
    }
     if (c < b) {
        temp = b;
        b = c;
        c = temp;
    }

    cout<< a << " <= " << b << " <= " << c <<endl;
}
