#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int filas, columnas;
    int respaldo;  
    scanf("%d",&filas);
    scanf("%d",&columnas);

    srand(time(NULL)); //Generamos numero aleatorio en base al tiempo

    /*Definicion de matriz*/
    int MATRIZ[50][50];

    for(int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
             /*Funcion para numero randomico*/
            int numero; //Variable donde se guardará nuestro numero aleatorio
	        numero=rand() % 20;

            MATRIZ[i][j] = numero;
        }
    }   

    for(int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf(" %d ", MATRIZ[i][j]);

            if(j == (columnas-1))
            {
                printf("\n");
            }
        }
    }

    puts(" ");


    for(int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf(" %d ", MATRIZ[j][i]);

            if(j == (columnas-1))
            {
                printf("\n");
            }
        }
    }

    return 0;
}
