#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
//funcionou certo
main()
{
    setlocale(LC_ALL,"Portuguese");
    int op, n1, n2, resultado;
    do{
    cout<< "#####MENU#######"<<endl;
    cout<< "#1 - SOMA      #"<<endl;
    cout<< "#2- SUBTRA��O  #"<<endl;
    cout<< "#3- SAIR       #"<<endl;
    cout<< "################"<<endl;
    cin>> op;
    if (op==1){
        cout<<"Informe o primero n�mero:";
        cin>> n1;
        cout<<"Informe o segundo n�mero:";
        cin>> n2;

        resultado= n1+n2;
        cout<<"Resultado da soma desses n�meros:"<< resultado<<endl;
        system ("pause");
    }
    else if (op ==2 ){
        cout<<"Informe o primero n�mero:";
        cin>> n1;
        cout<<"Informe o segundo n�mero:";
        cin>> n2;

        resultado= n1 - n2;
        cout<<"Resultado da diminui��o desses n�meros:"<< resultado<<endl;
        system ("pause");
    }
    else if(op !=1 && op !=3)
    {
         cout<<"Op��o do menu inv�lida!\n";
          system ("pause");
    }

    }while(op !=3);
}
