#include<iostream>
#include<cstdio>
#include<cstdlib>
//Escrever um programa que l� um n�mero n�o determinado de valores inteiros e positivos, maiores
//que 0 e menores que 5000 com base nos seguintes crit�rios:
//a) O programa deve parar de ler quando o n�mero digitado for 0.
//b) No final, o programa deve mostrar a quantidade de n�meros lidos, juntamente com a m�dia
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

        cout<<"Informe um n�mero:"<< endl;
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
        cout << "\n\nA m�dia dos valores informados: " << soma/cont<< endl ;
    }
