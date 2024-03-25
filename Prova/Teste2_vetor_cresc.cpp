#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    int v[7]={16,7,32,4,9,8,14};
    int i,j,chave;

    for(i=0; i<7;i++)
    {
        chave= v[i];
        j=i-1;

        while(j>=0 && v[j]> chave)
        {
            v[j+1]= v[j];
            j=j-1;
        }
        v[j+1]=chave;
    }
  for(i=0; i<7;i++)
    {
        cout<< v[i]<<", ";
    }


}
