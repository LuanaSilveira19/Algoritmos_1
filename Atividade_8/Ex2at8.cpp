#include<iostream>
#include<cstdio>
#include<cstdlib>
//Escrever um programa que lê um número não determinado de valores inteiros e positivos, maiores
//que 0 e menores que 5000 com base nos seguintes critérios:
//a) O programa deve parar de ler quando o número digitado for 0.
//b) No final, o programa deve mostrar a quantidade de números lidos, juntamente com a média
//destes.
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int x, soma=0, cont=0, f=0;

    cout<<"\tPara finalizar e ver os resultados digite 0."<<endl;
    cout<< fixed;
    cout.precision (2);
    do
    {

        cout<<"Informe um número:"<< endl;
        cin>> x;
        if(x<0 || x>5000)
            cout<< "Valor invalido!";
        else if(x==0)
            f=1;
        else
        {
            cont++;
            soma+=x;
        }
        }while (f==0);


        cout << "\n\nSoma dos valores informados: " << soma<<endl;
        cout << "\n\nA média dos valores informados: " << soma/cont<< endl ;
    }
