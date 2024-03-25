#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
main()
{
    setlocale(LC_ALL, "portuguese");
    int lin, col, mat [3][3], aux=0;

    for(lin=0; lin<3; lin++)
    {
        for(col=0; col<3; col++)
        {

            cout<<"Informe o valor ["<<lin<<"][" <<col<<"]: ";
            cin>> mat[lin][col];
            fflush (stdin);
        }
    }
    cout<<endl;

    cout<<"Matriz gerada:"<<endl;
    for(lin=0; lin<3; lin++)
    {
        for(col=0; col<3; col++)
        {
            cout<< mat[lin][col]<< "\t";
        }
        cout<<"\n";
    }

    cout<<endl;
    cout<<"DIAGONAL PRINCIPAL:"<<endl;

    for(lin=0; lin<3; lin++)
    {
        for(col=0; col<3; col++)
        {
            if(lin==col)
            {
                cout<< mat[lin][col]<< ", ";
            }
        }
    }
    cout<<endl;
    cout<<"ACIMA DA DIAGONAL PRINCIPAL:"<<endl;

    for(lin=0; lin<3; lin++)
    {
        for(col=0; col<3; col++)
        {
            if(lin<col)
            {
                cout<< mat[lin][col]<< ", ";
            }
        }
    }
    cout<<endl;
    cout<<"ABAIXO DA DIAGONAL PRINCIPAL:"<<endl;

    for(lin=0; lin<3; lin++)
    {
        for(col=0; col<3; col++)
        {
            if(lin>col)
            {
                cout<< mat[lin][col]<< ", ";
            }
        }
    }

    cout<<endl;
    cout<<"DIAGONAL SECUNDÁRIA:"<<endl;

    for(lin=0; lin<3; lin++)
    {
        for(col=0; col<3; col++)
        {
            if((lin+col)==2)
            {
                cout<< mat[lin][col]<< ", ";
            }
        }
    }


    cout<<endl;
    cout<<"ABAIXO DA DIAGONAL SECUNDÁRIA:"<<endl;

    for(lin=0; lin<3; lin++)
    {
        for(col=0; col<3; col++)
        {
            if((lin+col)>2)
            {
                cout<< mat[lin][col]<< ", ";
            }
        }
    }
    cout<<endl;
    cout<<"ACIMA DA DIAGONAL SECUNDÁRIA:"<<endl;

    for(lin=0; lin<3; lin++)
    {
        for(col=0; col<3; col++)
        {
            if((lin+col)<2)
            {
                cout<< mat[lin][col]<< ", ";
            }
        }
    }

}
