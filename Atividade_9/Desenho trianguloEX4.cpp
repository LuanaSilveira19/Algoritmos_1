#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
//Fa�a um algoritmo para desenhar um tri�ngulo ret�ngulo na tela. Onde deve ser informado a altura
//(indicando o n�mero de caracteres nos lados do tri�ngulo) e exibir o tri�ngulo na tela, usando o
//caractere '*'. A altura m�nima � 3 e a m�xima � de 20.
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
                cout<<"N�mero inv�lido"<<endl;
                break;
            }
            for (x=1; x<=j; x++)
            cout<< " * ";
        cout<< " \n"<<endl;



    }





}
