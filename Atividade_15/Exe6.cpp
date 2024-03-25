
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");
    int n, lin, col, meio;


    do
    {
        cout << "\nInforme o valor: ";
        cin >> n;
        fflush(stdin);
       if(n < 5 or n>15 or n%2==0 )
        {
            cout << "\nPosição inválida.";

        }

    }
    while((n < 5 or n>15 or n%2==0 ));

    char mat[n][n];

    meio= n/2;


    for(lin = 0; lin < n; lin++)
    {
        for(col= 0; col < n; col++)
        {
            if(lin==meio || col==meio)
            {
                mat[lin][col]= '#';
            }
            else if(lin< meio && col< meio)
            {
                mat[lin][col]= 'A';
            }
            else if(lin< meio && col> meio)
            {
                mat[lin][col]= 'B';
            }
            else if(lin> meio && col< meio)
            {
                mat[lin][col]= 'C';
            }
            else if(lin> meio && col> meio)
            {
                mat[lin][col]= 'D';
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
