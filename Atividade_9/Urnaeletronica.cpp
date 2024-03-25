//Fa�a um programa em C++ que simule uma urna eletr�nica. O programa dever� apresentar
//as seguintes op��es na tela:
//1. Candidato Gumercindo
//2. Candidato Teodoro
//3. Candidato Barnab�
//4. Nulo
//5. Branco
//Entre com o seu voto:
//O programa dever� apresentar o menu acima e ler os votos dos eleitores at� que seja informado o n�mero 6,
//em seguida o programa dever� calcular e apresentar as seguintes informa��es:
//a) O n�mero de votos de cada candidato;
//b) A porcentagem de votos nulos;
//c) A porcentagem de votos brancos;
//d) O candidato vencedor (em caso de empate, o programa deve imprimir �Uma nova elei��o ser�
//realizada�).

#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL, "portuguese");
    int opmenu, gumercindo=0, teodoro=0, barnabe=0, branco=0, nulo=0;
    int totalVotos=0;
    float percBranco, percNulo;

     cout<<fixed;
    cout.precision(2);
    do
    {
        system("cls"); //limpa a tela
        cout << "###URNA ELETR�NICA - INFORME SEU VOTO###\n";
        cout << "1. Candidato Gumercindo\n";
        cout << "2. Candidato Teodoro\n";
        cout << "3. Candidato Barnab�\n";
        cout << "4. Nulo\n";
        cout << "5. Branco\n";
        cin >> opmenu;
        if(opmenu<1 || opmenu>6)
        {
            cout << "Op��o inv�lida! Informe seu voto novamente!\n";
            system("pause");
        }
        else if(opmenu>=1 && opmenu<=5)
        {
            totalVotos++;
            switch (opmenu)
            {
            case 1:
                gumercindo++;
                cout << "Voto para o canditado Gumercindo computado!\n";
                system("pause");
                break;
            case 2:
                teodoro++;
                cout << "Voto para o canditado Teodoro computado!\n";
                system("pause");
                break;
            case 3:
                barnabe++;
                cout << "Voto para o canditado Barnab� computado!\n";
                system("pause");
                break;
            case 4:
                nulo++;
                cout << "Voto nulo computado!\n";
                system("pause");
                break;
            case 5:
                branco++;
                cout << "Voto branco computado!\n";
                system("pause");
                break;
            default:
                break;
            }
        }
    }
    while(opmenu != 6);
    percNulo = (nulo * 100.0) / totalVotos;
    percBranco = (branco * 100.0) / totalVotos;
    cout << "\n\nPorcentagem de votos nulos: " << percNulo << "%\n";
    cout << "Porcentagem de votos brancos: " << percBranco << "%\n";
    cout << "Gumercindo: " << gumercindo << " votos\n";
    cout << "Teodoro: " << teodoro << " votos\n";
    cout << "Barnab�: " << barnabe << " votos\n";
    if(gumercindo > teodoro && gumercindo > barnabe)
        cout << "Gumercindo foi o candidato vencedor com " << gumercindo << " votos!\n";
    else if(teodoro > gumercindo && teodoro > barnabe)
        cout << "Teodoro foi o candidato vencedor com " << teodoro << " votos!\n";
    else if(barnabe > gumercindo && barnabe > teodoro)
        cout << "Barnab� foi o candidato vencedor com " << barnabe << " votos!\n";
    else
        cout << "Empate! Uma nova elei��o ser� realizada.\n";
}
