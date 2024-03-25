#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    char partida;
    int gols_G=0, gols_I=0, media_gols=0, flag=0;
    int acum=0, soma;
cout<<"\tFederação Gaúcha de Futebol"<<endl;
    cout<<"\tEstatísticas de grenais"<<endl;
//arruma em aula
   do{

    cout<<"Informe a quantidade de gols do Grêmio:";
    cin>> gols_G;

    cout<<"Informe a quantidade de gols do Inter:";
    cin>> gols_I;


    cout<<"Novo Grenal (s-sim n-nao)";
    cin>> partida;
        if(partida == 's');
    acum++;

   }while(partida == 's');


   cout<<"Total de grenais: "<<acum<<endl;
   cout<<"O número de vitórias do Grêmio. "<<soma<<endl;









}
