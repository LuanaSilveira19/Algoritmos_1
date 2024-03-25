#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
//Faça um algoritmo para desenhar um triângulo retângulo na tela. Onde deve ser informado a altura
//(indicando o número de caracteres nos lados do triângulo) e exibir o triângulo na tela, usando o
//caractere '*'. A altura mínima é 3 e a máxima é de 20.
main()

{
    setlocale(LC_ALL,"Portuguese");
    int x, j, n;
    cout<<"Digite um numero:";
    cin>>n;


    for (j=1; j<=n; j++)
    {

            if(n <3 || n >20)
            {
                cout<<"Número inválido"<<endl;
                break;
            }
            for (x=1; x<=j; x++)
            cout<< " * ";
        cout<< " \n"<<endl;



    }





}
