/*2 – Escrever um algoritmo leia 2 vetores de 5 posições, A e B. A seguir:
a) Gere um novo vetor Y, que seja a união dos vetores lidos.
b) Mostrar o vetor Y.*/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");

    int i, A[5], B[5], Y[10];


    for(i = 0; i < 5; i++)
    {
        cout << " Informe o valor " << i << " do vetor A: ";
        cin >> A[i];
        fflush(stdin);
    }
    cout << "\n Valores no vetor A: ";
    for(i = 0; i < 5; i++)
    {
        cout << A[i] << ", ";
    }
    cout << endl;
    cout << endl;

    for(i = 0; i < 5; i++)
    {
        cout << " Informe o valor " << i << " do vetor B: ";
        cin >> B[i];
        fflush(stdin);
    }
    cout << "\n Valores no vetor B: ";
    for(i = 0; i < 5; i++)
    {
        cout << B[i] << ", ";
    }
    cout << endl;
    cout << endl;

    for (i = 0; i < 5; i++)
    {
        Y[i * 2] = A[i];
    }

    for (i = 0; i < 5; i++)
    {
        Y[i * 2 + 1] = B[i];
    }

    cout << "\n Valores no vetor Y (união dos vetores A e B): ";

    for (i = 0; i < 10; i++)
    {
        cout << Y[i] << ", ";
    }
    cout << endl;
}
