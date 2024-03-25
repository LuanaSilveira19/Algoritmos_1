#include<iostream>
using namespace std;
//Faça um algoritmo que leia o tipo do extintor, o mês e o ano da última recarga de determinado
//extintor e, conforme tabela abaixo, calcule o mês e o ano de vencimento.
main()
{
    setlocale (LC_ALL, "portuguese");

    int tipo, MR, MV, AR, AV;
  cout<<"Informe o tipo de extintor de incêndio (1, 2, 3 ou 4):";
  cin>> tipo;
  if(tipo>=5)
cout<<"Tipo Inválido";

    if ( tipo >= 1 && tipo <=4)
    {
    cout<< "Informe o mês (em numeral) da última recarga: ";
    cin>> MR;

    cout<< "Informe o ano (em numeral) da última recarga: ";
    cin>> AR;
    }
    if (tipo == 1)

    if (MR >=1 && MR <= 7)
    {
     MV= MR + 5;
     AV= AR;

       cout<< "Recarga Mês/Ano:" <<MR<< "/"<<AR<<endl;
        cout<<"Tipo: M0"<< endl;
        cout<<"Vencimento Mês/Ano: "<<MV<< "/"<<AV<<endl;
    }
else if(MR >=8 && MR <=12)
    {
        MV= MR + 5 - 12;
     AV= AR +1 ;

       cout<< "Recarga Mês/Ano:" <<MR<< "/"<<AR<<endl;
        cout<<"Tipo: M0"<< endl;
        cout<<"Vencimento Mês/Ano: "<<MV<< "/"<<AV<<endl;
    }
     if ( tipo == 2)


    if (MR >=1 && MR <= 7)
    {
     MV= MR + 10;
     AV= AR;

       cout<< "Recarga Mês/Ano:" <<MR<< "/"<<AR<<endl;
        cout<<"Tipo: MT"<< endl;
        cout<<"Vencimento Mês/Ano: "<<MV<< "/"<<AV<<endl;
    }
else if(MR >=8 && MR <=12)
    {
        MV= MR + 10 - 12;
     AV= AR +1 ;

       cout<< "Recarga Mês/Ano:" <<MR<< "/"<<AR<<endl;
        cout<<"Tipo: MT"<< endl;
        cout<<"Vencimento Mês/Ano: "<<MV<< "/"<<AV<<endl;
    }
 if(tipo ==3)


    if (MR >=1 && MR <= 4)
    {
     MV= MR + 8;
     AV= AR;

       cout<< "Recarga Mês/Ano:" <<MR<< "/"<<AR<<endl;
        cout<<"Tipo: PQ"<< endl;
        cout<<"Vencimento Mês/Ano: "<<MV<< "/"<<AV<<endl;
    }
else if(MR >=5 && MR <=12)
    {
        MV= MR + 8 - 12;
     AV= AR +1 ;

       cout<< "Recarga Mês/Ano:" <<MR<< "/"<<AR<<endl;
        cout<<"Tipo: PQ"<< endl;
        cout<<"Vencimento Mês/Ano: "<<MV<< "/"<<AV<<endl;
    }
if(tipo == 4)

    if (MR >=1 && MR <= 12)
    {
     MV= MR ;
     AV= AR+1;

       cout<< "Recarga Mês/Ano:" <<MR<< "/"<<AR<<endl;
        cout<<"Tipo: ML"<< endl;
        cout<<"Vencimento Mês/Ano: "<<MV<< "/"<<AV<<endl;
    }


}
