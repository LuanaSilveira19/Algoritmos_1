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
    cout<< "#2- SUBTRAÇÃO  #"<<endl;
    cout<< "#3- SAIR       #"<<endl;
    cout<< "################"<<endl;
    cin>> op;
    if (op==1){
        cout<<"Informe o primero número:";
        cin>> n1;
        cout<<"Informe o segundo número:";
        cin>> n2;

        resultado= n1+n2;
        cout<<"Resultado da soma desses números:"<< resultado<<endl;
        system ("pause");
    }
    else if (op ==2 ){
        cout<<"Informe o primero número:";
        cin>> n1;
        cout<<"Informe o segundo número:";
        cin>> n2;

        resultado= n1 - n2;
        cout<<"Resultado da diminuição desses números:"<< resultado<<endl;
        system ("pause");
    }
    else if(op !=1 && op !=3)
    {
         cout<<"Opção do menu inválida!\n";
          system ("pause");
    }

    }while(op !=3);
}
