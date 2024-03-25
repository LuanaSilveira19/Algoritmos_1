#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    int MAT[6] [5], lin, col;
    int aux;


        for(lin = 0; lin < 6; lin++)
        {
            for(col= 0; col < 5; col++)
            {
                MAT [lin][col] = rand() % 100;
            }
        }
         cout<< "Elementos da matriz:"<<endl;
        for(lin = 0; lin < 6; lin++)
        {
            for(col= 0; col < 5; col++)
            {
                cout << MAT[lin][col] << "\t";
            }
            cout<<endl;
        }
        cout<<endl;



            for(col= 0; col <5; col++)
            {
                aux=MAT[0][col];
                MAT[0][col]= MAT[5][col];
                MAT[5][col]= aux;
            }
              for(col= 0; col <5; col++)
            {
                aux=MAT[1][col];
                MAT[1][col]= MAT[4][col];
                MAT[4][col]= aux;
            }
              for(col= 0; col <5; col++)
            {
                aux=MAT[2][col];
                MAT[2][col]= MAT[3][col];
                MAT[3][col]= aux;
            }


            cout<<endl;
  cout<< "Elementos inversos da matriz:"<<endl;
         for(lin = 0; lin < 6; lin++)
        {
            for(col= 0; col < 5; col++)
            {
                cout << MAT[lin][col] << "\t";
            }
            cout<<endl;
        }
        cout<<endl;
}
