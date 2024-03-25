#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
/*Faça um algoritmo que receba um número inteiro N, sendo 3 < N < 7, ou seja, o valor de N deve ser
maior que 3 e menor que 7. A seguir, crie uma matriz NxN conforme exemplo abaixo, em que os
elementos acima da diagonal principal possuem o valor ‘A’, os elementos abaixo da diagonal principal
possuem o valor ‘B’ e os elementos da diagonal principal o valor X:*/
main()
{
    setlocale(LC_ALL, "portuguese");

    int n, lin, col;
    bool valido;
    char x = 'X';
    do
    {
        valido=false;
        cout << "\nInforme o valor: ";
        cin >> n;

        fflush(stdin);
        if(n <3 or n >7)
        {
            cout << "\nPosição inválida.";
            valido = true;
        }

    }
    while(valido);
char mat[n][n];


    for(lin = 0; lin < n; lin++)
    {
        for(col= 0; col < n; col++)
        {
            if(lin == col)
                mat[lin][col]= x;
            if(lin < col)
               mat[lin][col]= 'A' ;
            if(lin > col)
                mat[lin][col]= 'B';

        }

    }

      cout<< "Elementos da matriz:"<<endl;
    for(lin = 0; lin < n; lin++)
    {
        for(col= 0; col < n; col++)
        {
            cout<<mat[lin][col]<<"\t";
        }
        cout<<endl;
        }
}
