#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");
    int n, lin, col, maior, x, cont=0, aux;
    bool valido=false;

    do
    {
        valido=false;
        cout << "\nInforme a dimenção da matriz: ";
        cin >> n;
        fflush(stdin);
        if(n <5 or n >13)
        {
            cout << "\nPosição inválida.";
            valido = true;
        }
        if(n%2==0)
        {
            cout << "\nPosição inválida digite um valor impar.";
            valido = true;

        }
    }
    while(valido);

    int mat[n][n];
    srand(time(NULL));
    for(lin = 0; lin < n; lin++)
    {
        for(col = 0; col < n; col++)
        {
            mat[lin][col] = rand() %48 + 21;
        }
    }

    cout << "Matriz gerada: " << endl;

    maior =  mat [0][0];
    for(lin = 0; lin < n; lin++)
    {
        for(col = 0; col < n; col++)
        {
            if( mat [lin][col] > maior)
            {
                maior= mat [lin][col];
            }
            cout << mat[lin][col] << "\t";
        }
        cout << endl;
    }

    for(lin = 0; lin < n; lin++)
    {
        for(col = 0; col < n; col++)
        {
            if( lin==col)
            {
                mat [lin][col]=maior;
            }

        }

    }

    cout << "Matriz gerada com o maior valor na DP: " << endl;
    maior =  mat [0][0];
    for(lin = 0; lin < n; lin++)
    {
        for(col = 0; col < n; col++)
        {

            cout << mat[lin][col] << "\t";
        }
        cout << endl;
    }

    do
    {//Leia um valor inteiro X, sendo que X deve ser maior que 20 e menor que 70. Em seguida, calcule
//e mostre o percentual de elementos da matriz que são maiores que X;
        valido=false;
        cout << "\nInforme o valor: ";
        cin >> x;
        fflush(stdin);
        if(x <=20 or x >=70)
        {
            cout << "\nPosição inválida.";
            valido = true;
        }

    }
    while(valido);

    for(lin = 0; lin < n; lin++)
    {
        for(col = 0; col < n; col++)
        {
            if(mat[lin][col]> x)
                cont++;
        }
    }
    cout<< cont<<endl;

    cout<< "Percentual: "<< ((float) cont/ ((float)n*(float)n))*100.0<<endl;

    for(col = 0; col < n; col++)
    {
        aux= mat[0][col];
        mat[0][col]= mat[n-1][col];
        mat[n-1][col]= aux;
    }

     for(col = 0; col < n; col++)
    {
        aux= mat[1][col];
        mat[1][col]= mat[n-2][col];
        mat[n-2][col]= aux;
    }
    cout << "Matriz trocada: " << endl;
    for(lin = 0; lin < n; lin++)
    {
        for(col = 0; col < n; col++)
        {

            cout << mat[lin][col] << "\t";
        }
        cout << endl;
    }


}
