#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    int MAT[3] [6], lin, col, i;
    int PAR[18], IMPAR [18];


    for(lin = 0; lin < 3; lin++)
    {
        for(col= 0; col < 6; col++)
        {
            MAT [lin][col] = rand() % 50;
        }
    }
    cout<< "Elementos da matriz:"<<endl;
    for(lin = 0; lin < 3; lin++)
    {
        for(col= 0; col < 6; col++)
        {
            cout << MAT[lin][col] << "\t";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<< "Elementos pares da matriz:";

    for(lin = 0; lin < 3; lin++)
    {
        for(col= 0; col < 6; col++)
        {

            if(MAT[lin][col] %2==0)
            {
                PAR [i]= MAT[lin][col];
                cout<< PAR[i]<<",";
            }
        }
    }
    cout<<endl;
    cout<<endl;

    cout<< "Elementos impares da matriz:";

    for(lin = 0; lin < 3; lin++)
    {
        for(col= 0; col < 6; col++)
        {

            if(MAT[lin][col] %2!=0)
            {
                IMPAR [i]= MAT[lin][col];
                cout<< IMPAR[i]<<",";
            }
        }
    }
    cout<<endl;
}



