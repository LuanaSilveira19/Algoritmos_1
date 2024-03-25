#include<cstdio>
#include<cstdlib>
#include <iostream>
using namespace std;

main()

{
    int x,total=0;

   for(x=1; x<200; x++)
        {
           if(x%4==0)
           total+=x;
        }
    cout<<"A soma dos numeros divisiveis por 4 ate 200 e:"<<total;
}
