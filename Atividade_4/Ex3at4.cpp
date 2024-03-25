#include<iostream>
using namespace std;
//Crie um algoritmo que receba o código do produto e mostre na tela a descrição do mesmo e o seu
//referido valor.
main()
{
    setlocale(LC_ALL, "portuguese");

    int menu = 0;

    cout << "########Cardápio#########" << endl;
    cout << "# 10 - Hambúrguer #######" << endl;
    cout << "# 11 - Cachorro quente ##" << endl;
    cout << "# 12 - Torrada simples ##" << endl;
    cout << "#########################" << endl;
    cout << "Sua escolha: ";
    cin >> menu;

    switch(menu)
    {
    case 10:
        cout << "o valor do Hambúrguer é de R$ 5.00 ";
        getchar();
        break;
    case 11:
        cout << "o valor do Cachorro quente é de R$ 3.20 ";
        getchar();
        break;
    case 12:
        cout << "o valor da Torrada é de R$ 4.50 ";
        getchar();
        break;
    }
     return 0;
}
