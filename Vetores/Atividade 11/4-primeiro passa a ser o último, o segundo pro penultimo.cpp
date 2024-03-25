#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int vet[10], i, aux, x ;

    srand(time (NULL));
     cout<< "Valor do vetor:";

  for(i=0; i<10; i++)
    {
    vet[i]= rand() % 25 +31;//pensar quantos tem dentro de 30 a 55= 24
                            //colocar a porcentagem 25 que pega os numeros de 0 a 24
                            // adicionar a quantidade máxima de números que precisa
    cout<< vet[i]<<",";
    }
    cout<<endl;

    cout<< "Valor inverso do vetor:";
    for(i=0; i<5; i++)
    {
        for(x=5; x<10; x++)
        {
            aux= vet[i];
            vet[i]= vet[x];
            vet[x]=aux;
        }
    }
    for(i=0; i<10; i++)
    {
        cout<< vet[i]<<",";
    }
}
// for(i=0; i<10; i++)
//{
//       aux= rand() %25 + 31;
//     aux--;
//   vet[i]= aux
//}
