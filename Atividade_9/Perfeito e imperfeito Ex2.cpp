//Escrever um programa que leia um número inteiro e verifique se o número lido é um número perfeito.
//Um número perfeito é aquele em que a soma dos seus divisores, exceto ele, seja igual a ele próprio.
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
            cout<< "O número é perfeito.";
                else

                    cout<< "O número NÃO É PERFEITO.";
            }






}
