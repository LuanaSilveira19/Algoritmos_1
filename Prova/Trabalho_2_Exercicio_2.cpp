
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");

    int i, x, aux, menu = -1, gerou = 0, j, p1, p2;
    int v[11], w[11], q[11];
    bool flag;

    do
    {
        system("cls");
        cout << "#####MENU DE OP��ES#####" << endl;
        cout << "# 0 - Sair             #" << endl;
        cout << "# 1 - Gerar vetor      #" << endl;
        cout << "# 2 - Opera��o 2       #" << endl;
        cout << "# 3 - Opera��o 3       #" << endl;
        cout << "# 4 - Opera��o 4       #" << endl;
        cout << "########################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0 :
            system("cls");
            cout << "Programa finalizado.";
            getchar();
            break;
        case 1 :
            system("cls");
            srand(time(NULL)); //inicializando o rand�mico
            cout << "Informe um valor para X: ";
            cin >> x;
            fflush(stdin);
            for(i = 0; i < 11; i++)
            {
                v[i] = rand() % x;
            }

            cout << "\nVetor gerado: ";
            for(i = 0; i < 11; i++)
            {
                cout << v[i] << ", ";
            }
            gerou = 1;
            getchar();
            break;
        case 2 :
            system("cls");
            if(gerou != 0)
            {
                for(i = 0; i < 11; i++)
                {
                    w[10 - i] = v[i];
                }


                cout << "\n\nVetor W: ";
                for(i = 0; i < 11; i++)
                {
                    cout << w[i] << ", ";
                }
            }
            else
                cout << "\n� NECESS�RIO GERAR O VETOR PRIMEIRO";
            getchar();
            break;
        case 3 :
            system("cls");
            if(gerou != 0)
            {
                cout << "\nVetor gerado: ";
                for(i = 0; i < 11; i++)
                {
                    cout << v[i] << ", ";
                }

                do
                {
                    cout << "\nInforme a posi��o 1: ";
                    cin >> p1;
                    fflush(stdin);
                    if(p1 < 0 or p1 > 10)
                    {
                        cout << "\nPosi��o inv�lida.";
                    }
                }
                while(p1 < 0 or p1 > 10);

                do
                {
                    cout << "\nInforme a posi��o 2: ";
                    cin >> p2;
                    fflush(stdin);
                    if(p2 < 0 or p2 > 10)
                    {
                        cout << "\nPosi��o inv�lida.";
                    }
                }
                while(p2 < 0 or p2 > 10);

                aux = v[p1];
                v[p1] = v[p2];
                v[p2] = aux;

                cout << "\nVetor ap�s as trocas: ";
                for(i = 0; i < 11; i++)
                {
                    cout << v[i] << ", ";
                }


            }
            else
                cout << "\n� NECESS�RIO GERAR O VETOR PRIMEIRO";
            getchar();
            break;
        case 4 :
            system("cls");
            if(gerou != 0)
            {
                j = -1;
                cout << "\nVetor gerado: ";
                for(i = 0; i < 11; i++)
                {
                    cout << v[i] << ", ";
                    //rotina para criar o vetor q
                    if(v[i] % 5 == 0)
                    {
                        j++;
                        q[j] = v[i];
                    }
                }

                cout << "\nVetor q com m�ltiplos de 5: ";
                for(i = 0; i <= j; i++)
                {
                    cout << q[i] << ", ";
                }
            }
            else
                cout << "\n� NECESS�RIO GERAR O VETOR PRIMEIRO";
            getchar();
            break;
        default :
            system("cls");
            cout << "Op��o inv�lida.";
            getchar();
            break;
        };

    }
    while(menu != 0);
}
