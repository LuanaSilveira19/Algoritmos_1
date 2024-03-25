
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");

    int i, x, aux, menu = -1, gerou = 0, j;
    int x1[10], x2[10], x3[10];
    bool flag;

    do
    {
        system("cls");
        cout << "#####MENU DE OPÇÕES#####" << endl;
        cout << "# 0 - Sair             #" << endl;
        cout << "# 1 - Gerar vetor      #" << endl;
        cout << "# 2 - Intersecção      #" << endl;
        cout << "# 3 - Mostrar ordenado #" << endl;
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
            srand(time(NULL)); //inicializando o randômico
            for(i = 0; i < 10; i++)
            {
                //rotina para não permitir dados duplicados no vetor
                aux = rand() % 49 + 36;
                //cont++;
                if(i == 0)
                    x1[i] = aux;
                else
                {
                    flag = false;
                    for(x = 0; x < i; x++)
                    {
                        if(aux == x1[x])
                        {
                            //cout << "\nValor duplicado " << aux << endl;
                            flag = true;
                            break;
                        }
                    }
                    if(flag) //mesma coisa que if(flag == true)
                        i--;
                    else
                        x1[i] = aux;
                }
            }
            cout << "Vetor X1: ";
            for(i = 0; i < 10; i++)
            {
                cout << x1[i] << ", ";
            }

            //ROTINA PARA GERAR O VETOR X2

            for(i = 0; i < 10; i++)
            {
                //rotina para não permitir dados duplicados no vetor
                aux = rand() % 49 + 36;
                //cont++;
                if(i == 0)
                    x2[i] = aux;
                else
                {
                    flag = false;
                    for(x = 0; x < i; x++)
                    {
                        if(aux == x2[x])
                        {
                            //cout << "\nValor duplicado " << aux << endl;
                            flag = true;
                            break;
                        }
                    }
                    if(flag) //mesma coisa que if(flag == true)
                        i--;
                    else
                        x2[i] = aux;
                }
            }
            cout << "\n\nVetor X2: ";
            for(i = 0; i < 10; i++)
            {
                cout << x2[i] << ", ";
            }
            gerou = 1;
            getchar();
            break;
        case 2 :
            system("cls");
            if(gerou != 0)
            {
                j = -1; //deve inicializar dentro do case para não duplicar
                for(i = 0; i < 10; i++)
                {
                    for(x = 0; x < 10; x++)
                    {
                        if(x1[i] == x2[x])
                        {
                            j++;
                            x3[j] = x1[i];
                            break;
                        }
                    }
                }

                cout << "\n\nVetor X1: ";
                for(i = 0; i < 10; i++)
                {
                    cout << x1[i] << ", ";
                }

                cout << "\n\nVetor X2: ";
                for(i = 0; i < 10; i++)
                {
                    cout << x2[i] << ", ";
                }

                cout << "\n\nVetor X3: ";
                for(i = 0; i <= j; i++)
                {
                    cout << x3[i] << ", ";
                }
            }
            else
                cout << "\nÉ NECESSÁRIO GERAR O VETOR PRIMEIRO";
            getchar();
            break;
        case 3 :
            system("cls");
            if(gerou != 0)
            {
                for(i = 0; i < 10; i++)
                {
                    for(x = 0; x < 10; x++)
                    {
                        if(x1[i] < x1[x])
                        {
                            aux = x1[i];
                            x1[i] = x1[x];
                            x1[x] = aux;
                        }
                    }
                }

                cout << "\n\nVETOR X1 ORDENADO EM ORDEM CRESCENTE: " << endl;
                for(i = 0; i < 10; i++)
                {
                    cout << x1[i] << ", ";
                }

                //rotina para ordenar e mostrar o x2
                for(i = 0; i < 10; i++)
                {
                    for(x = i + 1; x < 10; x++)
                    {
                        if(x2[i] > x2[x])
                        {
                            aux = x2[i];
                            x2[i] = x2[x];
                            x2[x] = aux;
                        }
                    }
                }

                cout << "\n\nVETOR X2 ORDENADO EM ORDEM CRESCENTE: " << endl;
                for(i = 0; i < 10; i++)
                {
                    cout << x2[i] << ", ";
                }

                //rotina para ordenar e mostrar o x3
                for(i = 0; i <= j; i++)
                {
                    for(x = i + 1; x <= j; x++)
                    {
                        if(x3[i] > x3[x])
                        {
                            aux = x3[i];
                            x3[i] = x3[x];
                            x3[x] = aux;
                        }
                    }
                }

                cout << "\n\nVETOR X3 ORDENADO EM ORDEM CRESCENTE: " << endl;
                for(i = 0; i <= j; i++)
                {
                    cout << x3[i] << ", ";
                }
            }
            else
                cout << "\nÉ NECESSÁRIO GERAR O VETOR PRIMEIRO";
            getchar();
            break;
        default :
            system("cls");
            cout << "Opção inválida.";
            getchar();
            break;
        };

    }
    while(menu != 0);
}
