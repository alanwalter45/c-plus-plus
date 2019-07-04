#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int numero=111;
    int * pnumero = &numero;

    *pnumero = 777;

    printf("%d",numero);
    //scanf("%d",&numero);
    return 0;
}
