#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;

//https://www.google.com/search?q=algoritmo+megasena+c%2B%2B&rlz=1C1CHZN_pt-BRBR956BR956&oq=algoritmo+megasena+c%2B%2B&aqs=chrome..69i57j0i546l3.7623j0j7&sourceid=chrome&ie=UTF-8#fpstate=ive&vld=cid:ba1234e8,vid:SAcIvr28MKk

main()
{
       setlocale(LC_ALL, "portuguese");
    int aposta [6], i=1, n, verifica;
    int dig;
    while(i<7){
        cout<<"Insira a aposta "<<i<<":";
        cin>>n;

        if(n<1 || n>60)
        {
            cout<<"Número inválido:"<<endl;
        }else{
            n=0;
        for(verifica=0; verifica<i; verifica++)
        {
            if(aposta[verifica]== n)
            {
                dig=1;
                cout<<"Número já digitado!!";
                break;
            }
        }
        if(dig ==0)
        {
            aposta[i]==n;
            i++;
        }

    }
    }
}

