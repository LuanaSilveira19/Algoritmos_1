#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    int i=0, s=0;
    int vet[6]= {3,5,2,8,9,4};

    for(i=5; i>=0; i--)
    {
        if(vet[i]%2==0)
        {
            s+=vet[i];
        }
        else{
            vet[i]=s+i;
        }
    }
    for(i=0; i<6; i++)
    {
        cout<<vet[i]<< ",";
    }
}
