#include<iostream>
#include<cstdio>
#include<cstdlib>


using namespace std;
//Escreva um programa que l� um n�mero inteiro. Mostrar se o n�mero � ou n�o primo.
main()
{
    setlocale(LC_ALL,"Portuguese");
    int x,i, prim, resultado=0 ;

    cout<<"Informe um n�mero para ser verificado : ";
            cin>>prim;

            if(prim < 0)
            {
                   cout<<"Informe somente valores positivos."<<endl;
            }
            for(i=2; i<= prim/2; i++)
            {
                if(prim % i==0)
                {
                    resultado++;
                }
            }
            if(resultado ==0)
            {
                 cout<<"O n�mero "<< prim <<" � um n�mero primo."<<endl;
            }
            else
            {
                  cout<<"O n�mero "<< prim <<" n�o � um n�mero primo."<<endl;
            }
    }


