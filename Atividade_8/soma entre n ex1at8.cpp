#include<iostream>
#include<cstdio>
#include<cstdlib>
//Faça um programa que lê um número inteiro N e mostra a soma dos números pares de 1 até N, sendo 2 ≤ N ≤ 20.
//Observação: Caso o valor de N seja inválido, o programa deve mostrar uma mensagem de erro
//e um novo valor deve ser lido, até que um valor válido seja digitado pelo usuário!
using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, n, soma=0;

    do
    {
system ("cls");
        cout<<"Digite o valor:";
        cin>> n;

        if (n<2 || n >20)
        {
            cout<< "Valor Invalido."<<endl;
            system ("pause");
        }

    }
    while(n<2 || n >20);

    i=1;
    while (i <=n)
    {
        if(i %2==0)
            soma+=i;
        i++;
    }

    cout<< "A resultado da soma dos pares nesse intervalo:" <<soma<<endl;
}
