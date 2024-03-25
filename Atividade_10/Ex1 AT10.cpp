#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL, "portuguese");
    int F=0,M=0, NI=0, S=0, N=0, perc=0;
    int op;
    char res;

    cout<<fixed;
    cout.precision(2);
    do
    {
        system("cls"); //limpa a tela
        cout << "###Pesquisa de mercado ###\n";
        cout << "1. Feminino \n";
        cout << "2. Masculino\n";
        cout << "3. Não informado\n";
        cout << "4. Sair\n";
        cin >> op;

        if(op<1 || op>4)
        {
            cout << "Opção inválida! Informe seu voto novamente!\n";
            system("pause");
        }
        else if(op>=1 && op<=3)
        {
            switch (op)
            {
            case 1:
                F++;
                cout << "Gostou do novo produto lançado? (S-sim ou N-não)\n";
                cin>> res;
                if(res== 'S')
                    S++;
                else if(res== 'N')
                    N++;

                system("pause");
                break;
            case 2:
                M++;
                cout << "Gostou do novo produto lançado? (S-sim ou N-não)\n";
                cin>> res;

                if(res== 'S')
                    S++;
                else if(res== 'N')
                    N++;
                perc+=N;
                system("pause");
                break;

            case 3:
                NI++;
                cout << "Gostou do novo produto lançado? (S-sim ou N-não)\n";
                cin>> res;
                if(res== 'S')
                    S++;
                else if(res== 'N')
                    N++;
                system("pause");
                break;

            default:
                break;
            }
        }
    }
    while(op != 4);
    cout<<"O número de pessoas que respondeu sim:"<< S<<endl;
    cout<<"O número de pessoas que respondeu não:"<< N<<endl;
    cout<<"A porcentagem de pessoas do sexo Masculino que respondeu “não” entre todos os homens entrevistados.:"<< M <<endl;
}
