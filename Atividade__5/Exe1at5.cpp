#include<iostream>
using namespace std;
//Escreva um programa que receba o pre�o de custo de um produto e o c�digo da sua categoria
//(conforme tabela apresentada), caso for informado uma categoria diferente das apresentadas, deve
//apresentar mensagem de �Categoria inv�lida� e finalizar o programa, caso a categoria seja v�lida o
//programa dever� calcular o pre�o de venda, conforme margem de lucro da categoria.

main()
{
     setlocale (LC_ALL, "portuguese");
int produto= 0;
float custo= 0, venda= 0;

    cout << "#####Produto####" << endl;
    cout << "# 1 - Caderno  #" << endl;
    cout << "# 2 - Caneta   #" << endl;
    cout << "# 3 - Estojo   #" << endl;
    cout << "# 4 - Borracha #" << endl;
    cout << "################" << endl;
    cout <<  "Informe o produto: ";
    cin >> produto;
    cout<< "Informe o preco de custo: ";
    cin>> custo;

    cout<< fixed;
    cout.precision(2);

    if ( produto == 1)
        {
        venda= (custo + (35.0 / 100.0 * custo));
    cout << "O preco de venda do produto sera: R$" << venda <<endl;
    }
      else
      if ( produto == 2)
        {
        venda= (custo + (28.0 / 100.0 * custo));
    cout << "O preco de venda do produto sera: R$" << venda <<endl;
    }
      else
      if ( produto == 3)
        {
        venda= (custo + (22.0 / 100.0 * custo));
    cout << "O preco de venda do produto sera: R$" << venda <<endl;
    }
      else
      if ( produto == 4)
        {
        venda= (custo + (15.0 / 100.0 * custo));
    cout << "O preco de venda do produto sera: R$" << venda <<endl;
    }


    else
        {
        cout<< "Categoria inv�lida";
    }
}
