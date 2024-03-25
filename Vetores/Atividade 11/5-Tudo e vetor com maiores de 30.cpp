#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int x[10], y[10], u[20], aux, i, a,b;
    int z[10], w[10] ;
    int s[20];



     srand(time (NULL));
    for(i=0; i<10; i++)//A
    {
        x[i]= rand() % 51;

    }
    for(a=0; a<10; a++)
    {
        for(b=a; b<10; b++ )
            if(x[a] > x[b])
            {
                aux= x[a];
                x[a]= x[b];
                x[b]= aux;
            }
    }
    cout<<"Valor de x em ordem crescente:";

    for(i=0; i<10; i++)
    {
        cout<< x[i]<<",";
    }
    cout<<endl;


    cout<<endl;


    for(i=0; i<10; i++)//B
    {
        y[i]= rand() % 51;

    }
    for(a=0; a<10; a++)
    {
        for(b=a; b<10; b++ )
            if(y[a] < y[b])
            {
                aux= y[a];
                y[a]= y[b];
                y[b]= aux;
            }
    }
    cout<<"Valor de y em ordem decrescente:";

    for(i=0; i<10; i++)
    {
        cout<< y[i]<<",";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Valores impares de x:";
    for(i=0; i<10; i++)//C
    {
        if( x[i] %2!=0)
        {
            z[i]= x[i];
            cout<< z[i]<<",";
        }
    }
    cout<<endl;

    cout<<endl;


    cout<<"Valores pares de x:";
    for(i=0; i<10; i++)//D
    {
        if( x[i] %2==0)
        {
            w[i]= x[i];
            cout<< w[i]<<",";
        }
    }
    cout<<endl;
    cout<<endl;

    for(i=0; i<10; i++)//F
    {
        u[i*2]= x[i];
    }
    for(i=0; i<10; i++)
    {
        u[i*2+1]= y[i];
    }

    cout<<"União de x e y:";

    for(i=0; i<20; i++)
    {
        cout<< u[i]<<",";
    }
    cout<<endl;

    cout<<endl;
    cout<<"Valores de x e y maiores que 30 :";

    for(i=0; i<20; i++)//E
    {
        if(u[i] > 30)
        {
            s[i]= u[i];
            cout<<s[i]<<",";
        }

    }
  cout<<endl;
}
