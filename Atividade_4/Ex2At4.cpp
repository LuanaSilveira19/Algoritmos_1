#include<iostream>
using namespace std;
//Escreva um programa que receba um número qualquer e verifique se o número lido é par, caso seja
//execute a divisão deste número por 2, caso não seja par execute a soma deste número com 5 mostrando
//em qualquer condição o resultado na tela.
main()
{
    setlocale(LC_ALL, "portuguese");

    int n= 0, res= 0;
    cout<< "Informe um número:";
    cin>> n;
    if (n % 2 ==0)
    {
        res= n / 2;
         cout<< "O "<< n << " é par:" << res<<endl;
    }

    else
    {
        res= n + 5;
    cout<< "O número digitado foi somado com 5 para se tornar par." << endl;
    cout <<"O resultado fica: " << res<< endl;
}
}
