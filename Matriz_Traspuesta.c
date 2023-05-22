#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{   
    /*Definicion de variables*/
    int filas, columnas;
    int respaldo;  

    /*Asignacion de valores para las fila y columnas*/

    printf("\nIngrese las cantidad de filas que desea: ");
    scanf("%d",&filas);

    printf("\nIngrese las cantidad de columnas que desea: ");
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

            /*Asignacion de valor randomico a la matriz*/
            MATRIZ[i][j] = numero;
        }
    }   

    puts("MATRIZ ORIGINAL: ");

    /*Impresion de la matriz sin trasposicion*/
    for(int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf(" %d ", MATRIZ[i][j]);

            if(j == (columnas-1))/*Permite imprimir de forma adecuada visualmente la matriz, separada por espacios*/
            {
                printf("\n");
            }
        }
    }

    puts(" ");
    puts("MATRIZ MODIFICADA: ");

    /*Impresion de la matriz traspuesta*/
    for(int i = 0; i < columnas; i++) /*Invertimiento de los valores de las filas, por las columnas para la impresion*/
    {
        for (int j = 0; j < filas; j++) /*Invertimiento de los valores de las columnas, por las filas para la impresion*/
        {
            printf(" %d ", MATRIZ[j][i]);

            if(j == (filas-1))
            {
                printf("\n");
            }
        }
    }

    return 0;
}
