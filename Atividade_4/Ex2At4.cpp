#include<iostream>
using namespace std;
//Escreva um programa que receba um n�mero qualquer e verifique se o n�mero lido � par, caso seja
//execute a divis�o deste n�mero por 2, caso n�o seja par execute a soma deste n�mero com 5 mostrando
//em qualquer condi��o o resultado na tela.
main()
{
    setlocale(LC_ALL, "portuguese");

    int n= 0, res= 0;
    cout<< "Informe um n�mero:";
    cin>> n;
    if (n % 2 ==0)
    {
        res= n / 2;
         cout<< "O "<< n << " � par:" << res<<endl;
    }

    else
    {
        res= n + 5;
    cout<< "O n�mero digitado foi somado com 5 para se tornar par." << endl;
    cout <<"O resultado fica: " << res<< endl;
}
}
