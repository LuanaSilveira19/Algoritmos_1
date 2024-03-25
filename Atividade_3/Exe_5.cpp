#include<iostream>
using namespace std;
//Pedrinho tem um cofrinho com muitas moedas e deseja saber quantos reais conseguiu poupar. Faça um
//algoritmo para ler a quantidade de cada tipo de moeda e mostre o valor total economizado em reais.
//Considere que existam moedas de 1, 5, 10, 25 e 50 centavos e ainda moeda de 1 real. Não havendo moeda
//de um destes tipos, a quantidade respectiva é zero.
main ()
{
    setlocale (LC_ALL, "portuguese") ;

    int ucent= 0, ccent= 0, dcent= 0, vccent= 0, cincent= 0, umreal= 0;
    int t1= 0, t5= 0, t10= 0, t25= 0, t50= 0, t100= 0;
    float total= 0;

    cout<< fixed;
    cout.precision (2);

    cout<< "Quantidade de moedas de 1 centavo: R$";
    cin>> ucent;


    cout<< "Quantidade de moedas de 5 centavos: R$";
    cin>> ccent;

    cout<< "Quantidade de moedas de 10 centavos: R$";
    cin>> dcent;

    cout<< "Quantidade de moedas de 25 centavos: R$";
    cin>> vccent;

    cout<< "Quantidade de moedas de 50 centavos: R$";
    cin>> cincent;

    cout<< "Quantidade de moedas de 1 real: R$";
    cin>> umreal;

   t1= ucent * 1;
   t5= ccent * 5;
   t10= dcent * 10;
   t25= vccent * 25;
   t50= cincent * 50;
   t100= umreal * 100;


    total= (t1 + t5 + t10 + t25 + t50 + t100) / 100.0;
    cout<<"O total economizado por Pedrinho é: R$" << total << endl;

    return 0;

}



