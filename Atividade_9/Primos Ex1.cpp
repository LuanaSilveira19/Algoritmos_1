#include<iostream>
#include<cstdio>
#include<cstdlib>


using namespace std;
//Escreva um programa que lê um número inteiro. Mostrar se o número é ou não primo.
main()
{
    setlocale(LC_ALL,"Portuguese");
    int x,i, prim, resultado=0 ;

    cout<<"Informe um número para ser verificado : ";
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
                 cout<<"O número "<< prim <<" é um número primo."<<endl;
            }
            else
            {
                  cout<<"O número "<< prim <<" não é um número primo."<<endl;
            }
    }


