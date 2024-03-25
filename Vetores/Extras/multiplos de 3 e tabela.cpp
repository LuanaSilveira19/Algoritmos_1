#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[15], i;

    for(i=1; i<16; i++)
    {
        vet[i]= i*3;
    }
    cout<<"Indice" <<"   "<< " Valor"<<endl;
    for(i=1; i<16; i++)
    {
        cout<< i <<"           "<<vet[i]<<endl;
    }

}
