#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int V[20],inverte[20],i;


    srand(time (NULL));
    cout<<"Valor original:";
    for(i=0; i<20; i++)
    {
        V[i]= rand() %101;

        cout<< V[i]<<",";
    }
    cout<<endl;
  cout<<endl;
    cout<<"Valor invertido:";

    for(i=0; i<20; i++)
    {
        inverte[i] = V[i+1];
   inverte[19]=V[0];
        cout<< inverte[i]<<",";
    }
  cout<<endl;
}
