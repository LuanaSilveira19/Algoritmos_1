#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[10], i, aux;

       for(i=0; i<10; i++)
    {
    cout<<"Informe o valor da posição " << i<<" do vetor:";
    cin>>vet[i];
    }

       for(i=0; i<5; i++)
    {
        aux=vet[i];
        vet[i]= vet[i+5];
        vet[i+5]= aux;
    }
         for(i=0; i<10; i++)
    {

    cout<<vet[i]<<",";
    }
}
