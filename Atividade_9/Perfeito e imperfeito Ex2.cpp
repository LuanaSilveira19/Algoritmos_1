//Escrever um programa que leia um n�mero inteiro e verifique se o n�mero lido � um n�mero perfeito.
//Um n�mero perfeito � aquele em que a soma dos seus divisores, exceto ele, seja igual a ele pr�prio.
#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

main()

{
        setlocale(LC_ALL,"Portuguese");
    int x, soma= 0, n;
    cout<<"Informe um numero:";
    cin>> n;

    for(x=1; x< n; x++)

        if(n %x == 0)
            soma+=x;
    {
        if (soma==n)
            cout<< "O n�mero � perfeito.";
                else

                    cout<< "O n�mero N�O � PERFEITO.";
            }






}
