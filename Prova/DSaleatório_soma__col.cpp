
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int mat [5][5], lin, col, soma=0, mult=0, somL=0;

    for(lin=0; lin<5; lin++)
    {
        for(col=0; col<5; col++)
        {
            mat[lin][col]= rand ()% 51 + 39; //pensar quantos tem dentro de 40 a 90= 50
        }                                    //colocar a porcentagem 51 que pega os numeros de 0 a 50
                                             // adicionar a quantidade máxima de números que precisa
    }                                        //mesmo com esse exemplo o 40 ainda pega
     for(lin=0; lin<5; lin++)
    {
        for(col=0; col<5; col++)
        {
            if(col==0)
            {
                somL+=mat[lin][col];
            }
        }
    }

    cout<<"Matriz"<<endl;
    for(lin=0; lin<5; lin++)
    {
        for(col=0; col<5; col++)
        {
             soma+=mat[lin][col];
            cout << mat[lin][col] << "\t";
        }
        cout<<endl;
    }

       cout<<"Elementos da diagonal secundária: ";
    for(lin=0; lin<5; lin++)
    {
        for(col=0; col<5; col++)
        {
            if(lin+col == 4)
            {

                mult= 2 * mat[lin][col];
                 cout << mat[lin][col] << " ";
            }
        }

}
cout<<endl;
cout<<endl;
cout<<"Soma de todos os valores da matriz:"<<soma;
cout<<endl;
cout<<endl;
cout<<"Multiplicação por 2 DS valores da matriz:"<<mult;
cout<<endl;
cout<<endl;
cout<<"Soma coluna 0:"<<somL;
cout<<endl;


}
