#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");

    int i, j, aux, y[10]= {7, 3, 10, 8, 4, 1, 2, 17, 11, 6};

    for( i=0; i<10; i++)
    {
        for( j=0; j<=9; j++)
        {
        if(y[i] > y[j])//decrescente
        {
            aux= y[i];
            y[i]= y[j];
            y[j]= aux;
        }
    }
    }

    cout<<"Vetor ordenado: ";
    for(i = 0; i < 10; i++)
                {
                    cout << y[i] << ", ";
                }
}



