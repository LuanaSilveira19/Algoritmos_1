#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

# define TAM 2
using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");
    int lin, col, mat1[TAM][TAM], mat2[TAM][TAM], igual=1;

    srand(time(NULL));
    for(lin=0; lin<TAM; lin++)
    {
        for(col=0; col<TAM; col++)
        {
            mat1[lin][col]= rand ()% 2;
            mat2[lin][col]= rand ()% 2;
        }
    }
    cout<<"Matriz 1: "<<endl;
    for(lin=0; lin<TAM; lin++)
    {
        for(col=0; col<TAM; col++)
        {
            cout << mat1[lin][col] << "\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<"Matriz 2: "<<endl;
    for(lin=0; lin<TAM; lin++)
    {
        for(col=0; col<TAM; col++)
        {
            cout << mat2[lin][col] << "\t";
        }
        cout<<endl;
    }

     for(lin=0; lin<TAM; lin++)
    {
        for(col=0; col<TAM; col++)
        {
            if(mat1[lin][col] != mat2[lin][col])
            {
                igual=0;
            }
        }
    }

    if(igual==1)
    {
        cout <<"As matrizes são iguais";
    }
    else
 cout <<"As matrizes são diferentes";
}
