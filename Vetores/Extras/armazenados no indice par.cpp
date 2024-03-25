#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

     int vet[10], i;

     for(i=0; i<10; i++)
     {
         cout<<"Informe o valor da posição "<<i<<" do vetor:";
         cin>> vet[i];
     }
     for(i=0; i<10; i+=2)//pega apenas os valores dos indices pares
     {
         cout<<vet[i]<<",";
     }
}
