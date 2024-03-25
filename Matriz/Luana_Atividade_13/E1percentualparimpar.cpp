
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");

    int MAT[5] [5], lin, col, menu=-1;
    int maior=0, menor=0, media, soma=0;
    int pares=0, impares=0, percPAR, percIMPAR;


    do
    {
        system("cls");
 srand(time(NULL));
        for(lin = 0; lin < 5; lin++)
        {
            for(col= 0; col < 5; col++)
            {
                MAT [lin][col] = rand() % 100;
            }
        }

    cout<< "Elementos de uma matriz 5x5:"<<endl;
        for(lin = 0; lin < 5; lin++)
        {
            for(col= 0; col < 5; col++)
            {
                cout << MAT[lin][col] << "\t";
            }
            cout<<endl;
        }
        cout<<endl;

        cout << " ######## MENU DE OP��ES ######## " << endl;
        cout << " # 0 - Sair do programa                   # " << endl;
        cout << " # 1 - Maior elemento da matriz           # " << endl;
        cout << " # 2 - Menor elemento da matriz           # " << endl;
        cout << " # 3 - M�dia dos elementos                # " << endl;
        cout << " # 4 - Percentual dos pares e impares     # " << endl;
        cout << " ################################ " << endl;
        cout << endl;
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
            cout<< "O maior n�mero da matriz �: ";
            maior =  MAT [0][0];
            for(lin = 0; lin < 5; lin++)
            {
                for(col= 0; col < 5; col++)
                {
                    if( MAT [lin][col] > maior)
                    {
                        maior= MAT [lin][col];
                    }
                }
            }
            cout<< maior<<endl;
            system("pause");
            break;
        case 2:
            system("cls");
            cout<< "O maior n�mero da matriz �: ";
            menor =  MAT [0][0];
            for(lin = 0; lin < 5; lin++)
            {
                for(col= 0; col < 5; col++)
                {
                    if( MAT [lin][col] < menor)
                    {
                        menor= MAT [lin][col];
                    }
                }
            }
            cout<< menor<<endl;
            system("pause");
            break;

        case 3:
            system("cls");
            cout<< "M�dia dos elementos: ";
            for(lin = 0; lin < 5; lin++)
            {
                for(col= 0; col < 5; col++)
                {
                    soma+= MAT [lin][col];
                }
            }
            media= soma/25;
            cout<<media;
            cout<<endl;
            system("pause");
            break;
        case 4:
            system("cls");
            for(lin = 0; lin < 5; lin++)
            {
                for(col= 0; col < 5; col++)
                {
                    if(MAT [lin][col] %2==0)
                    {
                        pares++;
                    }
                    else
                    {
                        impares++;
                    }
                }
            }
            percPAR= (pares * 100.0) / 25;
            percIMPAR= (impares * 100.0) / 25;
            cout<<"Percentual dos n�meros pares da matriz: "<<percPAR<<endl;
            cout<<"Percentual dos n�meros impares da matriz: "<<percIMPAR<<endl;
            system("pause");
            break;
        }//switch

    }
    while(menu != 0);

}
