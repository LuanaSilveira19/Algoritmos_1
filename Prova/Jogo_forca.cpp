#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");
    char palavra[30], letra[1], secreta[30];
    int tam=0, i=0, chances=6,acertos=0;
    bool acerto=false;

    cout<<"Escolha a palavra secreta: ";
    cin>>palavra;
    system("cls");

    while (palavra[i] != '\0')
    {
        i++;
        tam++;
    }

    for(i=0; i<30; i++)
    {
        secreta[i]= '_';
    }

    while(chances > 0 && acertos < tam)
    {
        cout<<"Você tem "<< chances<<" restantes!"<<endl;
        cout<<"Palavra secreta: ";
        for(i=0; i<tam; i++)
        {
            cout<<secreta[i];
        }
cout<<endl;
        cout<<"Digite uma letra: ";

        cin>>letra[0];

         for(i=0; i<tam; i++)
        {
            if(palavra[i] == letra[0] && letra[0] !=secreta[i])
            {
                acerto=true;
                secreta[i]= palavra[i];
                acertos++;
            }
        }
        if(!acerto)
        {
            chances--;
        }
          acerto=false;
          system("cls");
    }

    if(acertos == tam)
    {
        cout<<"Você ganhou o jogo!"<<endl;
    }
    else{
        cout<<"Você perdeu!"<<endl;
    }

}
