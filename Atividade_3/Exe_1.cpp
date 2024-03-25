#include<iostream>
using namespace std;
//Considerando que para um consórcio,sabe-se o número total de prestações, a quantidade de prestações
//já pagas e o valor atual da prestação, escreva um algoritmo que determine o total pago pelo consorciado e
//o saldo devedor.

main ()
{
    setlocale (LC_ALL, "portuguese") ;
    float valor_a= 0, qtd_p= 0, qtd_pg = 0, valor_pg= 0;
    float saldo_dv= 0, total_pre= 0;

    cout<< "Digite o valor atual da prestação: " ;
    cin>> valor_a;

    cout<< "Digite a quantidade  total de prestações: ";
    cin>> qtd_p;
    cout<< "Digite a quantidade de prestações pagas: ";
    cin>> qtd_pg;

    total_pre= valor_a * qtd_p;
    cout<< "O valor total das prestações é de: " << total_pre<< endl;
    valor_pg= qtd_pg * valor_a;
    cout<< "Valor pago da prestação: " << valor_pg<< endl;
    saldo_dv= total_pre - valor_pg;
    cout<< "Valor restante da prestação: " <<saldo_dv<< endl;

    return 0;
}
