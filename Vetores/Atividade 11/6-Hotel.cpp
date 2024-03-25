
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");

    int vet[12], i, menu = -1, n, q, soma = 0;
    bool ocupado = false;
    //inicializa todos os quartos como vazios 0
    for(i = 0; i < 12; i++)
    {
        vet[i] = 0;
    }

    do
    {
        system("cls");
        cout << " ######## MENU DE OP��ES ######## " << endl;
        cout << " # 0 - Sair do programa         # " << endl;
        cout << " # 1 - Efetuar reserva          # " << endl;
        cout << " # 2 - Listar quartos (todos)   # " << endl;
        cout << " # 3 - Listar quartos (vagos)   # " << endl;
        cout << " # 4 - Mostrar h�spedes (total) # " << endl;
        cout << " # 5 - Efetuar sa�da            # " << endl;
        cout << " # 6 - Quartos ocupados >= x    # " << endl;
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

        case 1 :
            system("cls");
            do
            {
                ocupado = false;
                cout << " Informe o n�mero do quarto: ";
                cin >> n;
                fflush(stdin);
                if(n < 1 or n > 12)
                {
                    cout << " N�mero do quarto inv�lido! " << endl << endl;
                    ocupado = true;
                    continue;
                }
                if (vet[n - 1] != 0)
                {
                    cout << " Quarto j� ocupado. " << endl << endl;
                    ocupado = true;
                }

            }
            while(ocupado);

            cout << " Informe o n�mero de h�spedes: ";
            cin >> q;
            fflush(stdin);

            vet[n - 1] = q;

            cout << " Reserva realizada com sucesso! " << endl << endl;

            system("pause");
            break;

        case 2 :
            system("cls");
            cout << " N�mero de h�spedes por quarto: " << endl;

            for(i = 0; i < 12; i++)
            {
                cout << " Quarto " << i + 1 << " = " << vet[i] << endl;
            }
            system("pause");
            break;

        case 3 :
            system("cls");
            cout << " Quartos vagos: " << endl;

            for(i = 0; i < 12; i++)
            {
                if(vet[i] == 0)
                    cout << " Quarto " << i + 1 << endl;
            }
            system("pause");
            break;

        case 4 :
            system("cls");
            soma = 0;

            for(i = 0; i < 12; i++)
            {
                soma += vet[i];
            }
            cout << " Total de h�spedes no hotel: " << soma << endl << endl;
            system("pause");
            break;

        case 5 :
            system("cls");
            do
            {
                cout << " Informe o n�mero para registrar a sa�da: ";
                cin >> n;
                fflush(stdin);
                if(vet[n - 1] > 0)
                {
                    vet[n - 1] = 0;
                    cout << " Sa�da realizada com sucesso! " << endl;

                }
                else
                    cout << " Este quarto j� est� vazio. " << endl;
            }
            while(n < 1 or n > 12);
            system("pause");
            break;

        case 6 :
            system("cls");
            cout << " Informe a quantidade de h�spedes que deseja saber: ";
            cin >> q;
            fflush(stdin);

            for(i = 0; i < 12; i++)
            {
                if(vet[i] >=  q)
                    cout << " Quarto " << i + 1 << " = " << vet[i] << endl;
            }
            system("pause");
            break;
        }
    }
    while(menu != 0);

}
