
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");

    int n, lin, col;
    bool valido;
    do
    {
        valido=false;
        cout << "\nInforme o valor: ";
        cin >> n;

        fflush(stdin);
        if(n <3 or n >7)
        {
            cout << "\nPosição inválida.";
            valido = true;
        }

    }
    while(valido);
char mat[n][n];


    for(lin = 0; lin < n; lin++)
    {
        for(col= 0; col < n; col++)
        {
            if((lin + col)==n-1)
                mat[lin][col]= 'X';
            if((lin + col)< n-1)
               mat[lin][col]= 'A' ;
            if((lin + col)>n-1)
                mat[lin][col]= 'B';
        }

    }

      cout<< "Elementos da matriz:"<<endl;
    for(lin = 0; lin < n; lin++)
    {
        for(col= 0; col < n; col++)
        {
            cout<<mat[lin][col]<<"\t";
        }
        cout<<endl;
        }
}
