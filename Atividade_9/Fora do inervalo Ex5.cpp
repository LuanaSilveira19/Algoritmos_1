//Escreva um programa que leia 10 valores inteiros, s� ser�o aceitos valores entre 1 e 50, valores
//fora do intervalo devem ser desconsiderados. Ap�s ler os valores o sistema dever� apresentar o maior
//valor lido (considerar somente os dentro do intervalo) e em qual das leituras ele foi informado, dever�
//apresentar quantos dos valores digitados estavam fora do intervalo.
#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, contFora=0, num, maior, leituraMaior;

    for( i=1; i<=10; i++)
{
    do{
        cout<<  "Informe um n�mero entre 1 e 50:";
        cin>> num;
        //verifica se est� dentro do intervalo
        if (num >= 1 && num <=50)
        {
            //verifica o maior valor
            //se i=1, ent�o � o primeiro valor v�lido lido
         if(i==1 || num > maior)
         {
             maior=num;
             leituraMaior= i;
         }
        }
    else
    {
        contFora++;
        cout<< "O valor digitado est� fora do intervalo e foi desconsiderado.\n "<<endl;
    }
    }while(num <1 || num >50);
}
cout<< "O maior valor � "<< maior << " e ele foi informado na "<< leituraMaior<<"� leitura\n";
cout<< "Quantidade de valores digitados fora do intervallo: "<< contFora<<endl;
}
