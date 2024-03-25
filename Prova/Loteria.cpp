#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

int valida_aposta(int num);

main()
{
    setlocale(LC_ALL,"portuguese");
    int i, j, aux, aposta[6], sorteio[6], acertos = 0;
    bool duplicado = false;

    for(i = 0; i < 6; i++)
    {
        aux = valida_aposta(i);
        if(i == 0)
            aposta[i] = aux;
        else
        {
            duplicado = false;
            for(j = 0; j < i; j++)
            {
                if(aposta[j] == aux)
                {
                    duplicado = true;
                    break;
                }
            }
            if(duplicado == false)
                aposta[i] = aux;
            else
            {
                i--;
                cout << "\nO Valor " << aux << " já foi registrado nesta aposta." << endl;
                getchar();
            }
        }
    }
    system("cls");
    cout << "\nValores apostados: ";
    for(i = 0; i < 6; i++)
    {
        cout << aposta[i] << ", ";
    }

//rotina que realiza o sorteio
    srand(time(NULL));
    for(i = 0; i < 6; i++)
    {
        aux = rand() % 60 + 1;
        if(i == 0)
            sorteio[i] = aux;
        else
        {
            duplicado = false;
            for(j = 0; j < i; j++)
            {
                if(sorteio[j] == aux)
                {
                    duplicado = true;
                    break;
                }
            }
            if(duplicado == false)
                sorteio[i] = aux;
            else
                i--;
        }
    }

    cout << "\n\nValores sorteados: ";
    for(i = 0; i < 6; i++)
    {
        cout << sorteio[i] << ", ";
    }

//rotina para conferir os acertos
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 6; j++)
        {
            if(aposta[i] == sorteio[j])
            {

                acertos++;
                break;
            }
        }
    }
    if(acertos == 4)
        cout << "\nParabéns você acertou a quadra";
    else if(acertos == 5)
        cout << "\nParabéns você acertou a quina";
    else if(acertos == 6)
        cout << "\nParabéns você é o novo milionário";
    else
        cout << "\nVocê acertou " << acertos << " número(s)";
}

int valida_aposta(int num)
{
    int n;
    do
    {
        system("cls");
        cout << "Informe sua aposta " << num + 1 << ": ";
        cin >> n;
        fflush(stdin);
        if(n < 1 or n > 60)
        {
            cout << "Valor inválido para aposta.";
            getchar();//mantem na tela s
        }
    }
    while(n < 1 or n > 60);
    return n;
}
