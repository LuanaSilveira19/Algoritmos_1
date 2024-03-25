#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include <iomanip>

using namespace std;
main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
  cout << fixed << setprecision(2);

    int V[5], i, media=0, soma=0;


    for(int i=0; i<5; i++)
    {
        cout<<"Informe os valores: ";
        cin>> V[i];
    }

     for(int i=0; i<5; i++)
    {

        cout<< V[i] <<",";
    }
cout<<endl;
    for(int i=0; i<5; i++)
    {
        soma += V[i];
    }

    media = soma / 5;
    cout<<"Média do vetor: "<< media;
    cout<<endl;

      cout<<" Valor maior que a média: ";
     for(int i=0; i<5; i++)
    {
        if(V[i] > media)
        {
             cout << V[i] <<",";
        }
    }
        cout<<endl;

      cout<<" Valor menor que a média: ";
     for(int i=0; i<5; i++)
    {
        if(V[i] < media)
        {
             cout << V[i] <<",";
        }
    }
}
