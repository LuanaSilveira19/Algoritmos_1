#include<iostream>
using namespace std;
//Considerando que para um cons�rcio,sabe-se o n�mero total de presta��es, a quantidade de presta��es
//j� pagas e o valor atual da presta��o, escreva um algoritmo que determine o total pago pelo consorciado e
//o saldo devedor.

main ()
{
    setlocale (LC_ALL, "portuguese") ;
    float valor_a= 0, qtd_p= 0, qtd_pg = 0, valor_pg= 0;
    float saldo_dv= 0, total_pre= 0;

    cout<< "Digite o valor atual da presta��o: " ;
    cin>> valor_a;

    cout<< "Digite a quantidade  total de presta��es: ";
    cin>> qtd_p;
    cout<< "Digite a quantidade de presta��es pagas: ";
    cin>> qtd_pg;

    total_pre= valor_a * qtd_p;
    cout<< "O valor total das presta��es � de: " << total_pre<< endl;
    valor_pg= qtd_pg * valor_a;
    cout<< "Valor pago da presta��o: " << valor_pg<< endl;
    saldo_dv= total_pre - valor_pg;
    cout<< "Valor restante da presta��o: " <<saldo_dv<< endl;

    return 0;
}
