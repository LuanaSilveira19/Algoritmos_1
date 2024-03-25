#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

# define TAM 2

using namespace std;


void preencheMat(int tam, int mat[2][2]);
void mostraMat(int tam, int mat[2][2]);

main()
{
    setlocale(LC_ALL, "portuguese");
    int lin, col, mat1[TAM][TAM], mat2[TAM][TAM], igual=1;


    srand(time(NULL));
    cout<<"Matriz 1: "<<endl;
    preencheMat(TAM, mat1);
    mostraMat(TAM, mat1);


    cout<<"Matriz 2: "<<endl;
    preencheMat(TAM, mat2);
    mostraMat(TAM, mat2);


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

void preencheMat(int tam, int mat[2][2])
{
    int lin, col;

    for(lin=0; lin<tam; lin++)
    {
        for(col=0; col<tam; col++)
        {
            mat[lin][col]= rand ()% 2;
        }
    }
}
void mostraMat(int tam, int mat[2][2])
{
    int lin, col;
     for(lin=0; lin<tam; lin++)
    {
        for(col=0; col<tam; col++)
        {
            cout << mat[lin][col] << "\t";
        }
        cout<<endl;
    }

}
