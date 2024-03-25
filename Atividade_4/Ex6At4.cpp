#include<iostream>
using namespace std;
//Escreva um algoritmo que leia três números: A, B e C. Encontrar e mostrar o maior, o menor e o do
//meio entre os três números. Mostre os números em ordem crescente.
main()
{
    setlocale(LC_ALL, "portuguese");
    int a= 0, b= 0, c= 0, temp= 0;

    cout<<"Informe o primeiro número: ";
    cin>> a;

      cout<<"Informe o segundo número: ";
    cin>> b;

      cout<<"Informe o terceiro número: ";
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
