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
cout<<"\tFedera��o Ga�cha de Futebol"<<endl;
    cout<<"\tEstat�sticas de grenais"<<endl;
//arruma em aula
   do{

    cout<<"Informe a quantidade de gols do Gr�mio:";
    cin>> gols_G;

    cout<<"Informe a quantidade de gols do Inter:";
    cin>> gols_I;


    cout<<"Novo Grenal (s-sim n-nao)";
    cin>> partida;
        if(partida == 's');
    acum++;

   }while(partida == 's');


   cout<<"Total de grenais: "<<acum<<endl;
   cout<<"O n�mero de vit�rias do Gr�mio. "<<soma<<endl;









}
