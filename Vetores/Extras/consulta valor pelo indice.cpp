#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[10], i, indice;

    for(i=0; i<10; i++)
    {
    cout<<"Informe o valor da posição " << i<<" do vetor:";
    cin>>vet[i];
    }
    cout<<"Informe o indice a ser consultado:";
    cin>>indice;

    while((indice>=0 && indice<10))
    {
      cout<<"O valor da posição é:"<< vet[indice]<<endl;
       cout<<"Informe o indice a ser consultado:";
    cin>>indice;
    }

      int valorBuscado;
      cout<<"Informe o valor a ser buscado no vetor:";
      cin>>valorBuscado;

      int achouValor=0;
  for(i=0; i<10; i++)
    {
        if(valorBuscado == vet[i])
        {
            achouValor=1;
        }
    }
    if (achouValor==0)
    {
         cout<<"Valor não existe:";
    }
    else if (achouValor==1)// não deu certo
    {
         cout<<"Valor existe:";
    }

}
