#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int vet[80], i, maior=0, indice;

    srand(time (NULL));
     cout<< "Valor do vetor:";

  for(i=0; i<80; i++)
    {
    vet[i]= rand() % 54 + 65;
    cout<< vet[i]<<",";
    }
    maior= vet[0];
    cout<<endl;
   cout<<endl;
      for(i=1; i<80; i++)
      {
          if(vet[i] > maior)
          {
              maior= vet[i];
              indice= i;
          }
      }

    cout<<"Maior valor é "<< maior <<" e sua posição é " << indice;
   cout<<endl;

}
