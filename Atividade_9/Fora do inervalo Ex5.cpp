//Escreva um programa que leia 10 valores inteiros, só serão aceitos valores entre 1 e 50, valores
//fora do intervalo devem ser desconsiderados. Após ler os valores o sistema deverá apresentar o maior
//valor lido (considerar somente os dentro do intervalo) e em qual das leituras ele foi informado, deverá
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
        cout<<  "Informe um número entre 1 e 50:";
        cin>> num;
        //verifica se está dentro do intervalo
        if (num >= 1 && num <=50)
        {
            //verifica o maior valor
            //se i=1, então é o primeiro valor válido lido
         if(i==1 || num > maior)
         {
             maior=num;
             leituraMaior= i;
         }
        }
    else
    {
        contFora++;
        cout<< "O valor digitado está fora do intervalo e foi desconsiderado.\n "<<endl;
    }
    }while(num <1 || num >50);
}
cout<< "O maior valor é "<< maior << " e ele foi informado na "<< leituraMaior<<"ª leitura\n";
cout<< "Quantidade de valores digitados fora do intervallo: "<< contFora<<endl;
}
