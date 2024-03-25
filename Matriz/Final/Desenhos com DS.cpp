#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");
    int n, lin, col, meio;
    bool valido=false;

    do
    {
        valido=false;
        cout << "\nInforme o valor: ";
        cin >> n;
        fflush(stdin);
        if(n <5 or n >13)
        {
            cout << "\nPosição inválida.";
            valido = true;
        }
        if(n%2==0)
        {
            cout << "\nPosição inválida digite um valor impar.";
            valido = true;

        }
    }
    while(valido);

char mat[n][n];

    meio= n/2+2 ;


    for(lin = 0; lin < n; lin++)
    {
        for(col= 0; col < n; col++)
        {
            if(lin>col)
            {
                 mat[lin][col]= 'X';
            }
            else{
                mat[lin][col]= ' ';
            }


        }
    }
   cout<< "Elementos da matriz:"<<endl;
   for(lin = 0; lin < n; lin++)
    {
        for(col= 0; col < n; col++)
        {

            cout << mat[lin][col] << "\t";
        }
cout<<endl;
    }


}
