#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int V[20], PAR[20], IMPAR[20],i;


    srand(time (NULL));
    cout<<"Valores do vetor V:";
    for(i=0; i<20; i++)
    {
        V[i]= rand() %101;

        cout<< V[i]<<",";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Valores impares do vetor V:";
    for(i=0; i<20; i++)
    {
        if( V[i] %2!=0)
        {
            IMPAR[i]= V[i];
            cout<< IMPAR[i]<<",";
        }
    }


    cout<<endl;
    cout<<endl;

    cout<<"Valores pares do vetor V:";
    for(i=0; i<20; i++)
    {
        if( V[i] %2==0)
        {
            PAR[i]= V[i];
            cout<< PAR[i]<<",";
        }
    }
    cout<<endl;
}

