
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
int i;
float vet[10];

    for (i=0; i<=9; i++)
    {
        vet[i]= ((rand()%51 + 39)/100.0)*50.0;
    }
    cout<<"Inteiros e floats:";
     for (i=0; i<=9; i++)
    {
        cout<<vet[i]<<", ";
    }
cout<<endl;
    cout << fixed;
    cout.precision(2);

    srand(time(NULL)); //INICIALIZA A SEMENTE DO RANDÔMICO
    for(i = 0; i < 10; i++)
    {
        vet[i] = ((rand() % 51 + 39) * 1.156); //GERA UMA VALOR RANDÔMICO FLOAT mas não respeita o comando de limite
    }
    cout << "\n\nELEMENTOS FLOATS NO VETOR: ";
    for(i = 0; i < 10; i++)
    {
        cout <<  vet[i] << ", ";
    }
}

