#include<iostream>
using namespace std;
//Crie um algoritmo que receba o c�digo do produto e mostre na tela a descri��o do mesmo e o seu
//referido valor.
main()
{
    setlocale(LC_ALL, "portuguese");

    int menu = 0;

    cout << "########Card�pio#########" << endl;
    cout << "# 10 - Hamb�rguer #######" << endl;
    cout << "# 11 - Cachorro quente ##" << endl;
    cout << "# 12 - Torrada simples ##" << endl;
    cout << "#########################" << endl;
    cout << "Sua escolha: ";
    cin >> menu;

    switch(menu)
    {
    case 10:
        cout << "o valor do Hamb�rguer � de R$ 5.00 ";
        getchar();
        break;
    case 11:
        cout << "o valor do Cachorro quente � de R$ 3.20 ";
        getchar();
        break;
    case 12:
        cout << "o valor da Torrada � de R$ 4.50 ";
        getchar();
        break;
    }
     return 0;
}
