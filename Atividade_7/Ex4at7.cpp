#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int soma = 0, n;
    while(soma <= 250
          )
    {
        cout << "Informe o número para somar: ";
        cin >> n;
        soma = soma + n;
    }

    cout << "\n\nSoma dos valores informados: " << soma;
}
