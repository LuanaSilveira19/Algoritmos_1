#include<iostream>
#include<cstdio>
#include<cstdlib>
//Criar um algoritmo que recebe a idade e o estado civil (C-casado, S-solteiro, V-viúvo e D-desquitado)
//de várias pessoas. Calcule e mostre:
//a) A quantidade de pessoas casadas;
//b) A quantidade de pessoas solteiras;
//c) A média de idade das pessoas viúvas;
//d) O percentual de pessoas desquitadas em relação a todas as pessoas analisadas.
using namespace std;
//arrumar em aula
main()
{
    setlocale(LC_ALL,"Portuguese");
    char estcivil;
    int idade, f=0, cont_c=0,cont_s=0, cont=0, cont_v=0, cont_d=0, soma_v=0;

    cout<<"\tPara saber o estado civil informe (C-casado, S-solteiro, V-viúvo e D-desquitado)"<<endl;
    cout<<"\tPara finalizar e ver os resultados digite 0."<<endl;

    do
    {
        cout<<"Informe a idade da pessoa:"<< endl;
        cin>>idade;
        do
        {
            cout<<"Informe o estado civil da pessoa:"<<endl;
            cin>>estcivil;

            if(estcivil !='c' && estcivil !='s' && estcivil !='v' && estcivil !='d')
                cout<<"Estado Civil invalido!";
        }
        while (estcivil !='c' && estcivil !='s' && estcivil !='v' && estcivil !='d');
        cont++;
        if(estcivil =='c')
            cont_c++;

            if(estcivil =='s')
                cont_s++;

                if(estcivil =='d')
                    cont_d++;

                    if(estcivil =='v')
                    {
                        cont_v++;
                        soma_v+=idade;
                    }
}while(f==0);

    cout<<"A quantidade de pessoas casadas é:"<< cont_c <<endl;
    cout<<"A quantidade de pessoas solteiras é:"<< cont_s<<endl;
    cout<< "A média de idade das pessoas viúvas é:"<< soma_v/ cont_v<<endl;
    cout<<"O percentual de pessoas desquitadas em relação a todas as pessoas analisadas:"<< (cont_d / cont)*100<<endl;
}


