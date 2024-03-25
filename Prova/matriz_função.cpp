
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
void gerarMat(int lin, int col, int mat[5][5]);
void mostrarMat(int lin, int col, int mat[5][5]);
main()
{
    setlocale(LC_ALL, "portuguese");



    int lin, col, mat[5][5], l,c, rep=0;
    gerarMat(lin,col, mat);

    cout<<"Matriz gerada por função"<<endl;
    mostrarMat(lin, col, mat);


}
        void gerarMat(int lin, int col, int mat[5][5])
        {
            srand(time(NULL));
            for(lin=0; lin<5; lin++)
            {
                for(col=0; col<5; col++)
                {
                    mat[lin][col]= rand ()% 50;
                }
            }
        }

        void mostrarMat(int lin, int col, int mat[5][5])
        {

            for(lin=0; lin<5; lin++)
            {
                for(col=0; col<5; col++)
                {
                    cout << mat[lin][col] << "\t";
                }
                cout<<endl;
            }

        }
