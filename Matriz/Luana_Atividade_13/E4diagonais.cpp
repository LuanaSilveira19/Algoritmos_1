#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
/*
 Escreva um programa que gere valores menores que 100 para preencher uma
 matriz de inteiros de
ordem 8, a seguir apresente:
- Os elementos da matriz
- Os elementos da diagonal principal da matriz, juntamente com a soma
destes elementos
- Os elementos pares da diagonal secundária da matriz
- O maior elemento acima da diagonal principal
- Os elementos ímpares abaixo da diagonal principal.
*/

main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    int mat[8] [8], lin, col, menu=-1;
    int soma=0, PAR[8], i, impar[25];
    int maior, aux;
    for(lin = 0; lin < 8; lin++)
    {
        for(col= 0; col < 8; col++)
        {
            mat [lin][col] = rand() % 100;
        }
    }

    do
    {
        system("cls");
        cout<< "Elementos de uma matriz:"<<endl;

        for(lin = 0; lin < 8; lin++)
        {
            for(col= 0; col < 8; col++)
            {
                cout << mat[lin][col] << "\t";
            }
            cout<<endl;
        }
        cout<<endl;

        cout << " ############ MENU DE OPÇÕES ############ " << endl;
        cout << " # 0 - Sair do programa                 # " << endl;
        cout << " # 1 - Elementos da DP                  # " << endl;
        cout << " # 2 - Elementos pares da DS da matriz  # " << endl;
        cout << " # 3 - Maior elemento acima da DP       # " << endl;
        cout << " # 4 - Elementos ímpares abaixo da DP   # " << endl;
        cout << " ######################################## " << endl;
        cout << " Sua Escolha: ";
        cin >> menu;
        fflush(stdin);
        switch(menu)
        {


        case 0 :
            system("cls");
            cout << "\n Programa finalizado! " << endl << endl;
            system("pause");
            break;
        case 1:
            system("cls");


            cout << "\nElementos da diagonal principal: ";
            for(lin = 0; lin < 8; lin++)
            {
                for(col = 0; col < 8; col++)
                {
                    if(lin == col)
                    {
                        cout << mat[lin][col] << "\t";
                        soma+=mat[lin][col];
                    }
                }
            }
            cout << "\nSoma: "<<soma << endl;
            cout<<endl;
            system("pause");
            break;
        case 2:
            system("cls");
            cout << "\nElementos da diagonal secundária: " << endl;
            for(lin = 0; lin < 8; lin++)
            {
                for(col = 0; col < 8; col++)
                {
                    if((lin + col) == 7)
                    {
                        cout << mat[lin][col] << "\t";
                    }
                }
            }
            cout<<endl;
            cout << "\nPAR: " << endl;
            for(lin = 0; lin < 8; lin++)
            {
                for(col = 0; col < 8; col++)
                {
                    if((lin + col) == 7)
                    {
                       if(mat[lin][col] % 2 == 0)
                          cout << mat[lin][col] << "\t";
                    }
                }
            }
            system("pause");
            break;
        case 3:
            system("cls");
            maior=mat[0][1]; //deve inicializar com o primeiro elemento acima da DP
            cout << "\nElementos acima da diagonal principal: " << endl;
            for(lin = 0; lin < 8; lin++)
            {
                for(col = 0; col < 8; col++)
                {
                    if(lin < col)
                    {
                        cout << mat[lin][col] << ",";
                        if(mat[lin][col] > maior)
                        {
                            maior= mat[lin][col];
                            //NÃO PRECISA TROCAR SÓ ATUALIZAR O MAIOR
                        }
                    }
                }
            }
            cout<<endl;
            cout << "\Maior: " <<maior<< endl;
            system("pause");
            break;
        case 4:
            system("cls");
            cout << "\nElementos abaixo da diagonal principal: " << endl;

                for(lin = 0; lin < 8; lin++)
                {
                    for(col = 0; col < 8; col++)
                    {
                        if(lin > col)
                        {
                            cout << mat[lin][col] << ",";
                        }
                    }
                }

            cout<<endl;
             cout << "\nIMPARES: " << endl;
                for(lin = 0; lin < 8; lin++)
                {
                    for(col = 0; col < 8; col++)
                    {
                        if((lin > col) && (mat[lin][col] % 2 != 0))
                        {
                            cout << mat[lin][col] << ",";
                        }
                    }
                }
            system("pause");
            break;
        }
    }
    while(menu != 0);
}
