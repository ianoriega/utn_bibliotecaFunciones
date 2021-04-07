#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"
#include "arr.h"

//funcion que calcula el elemento maximo de un array
int arr_calcularMaximoInt(int array[], int limite, int* pResultado)
{
	int retorno = -1;
	int i;
	int maximo;

	if(array != NULL && limite > 0 && pResultado != NULL)
	{
		maximo = array[0];
		for(i=0; i<limite; i++)
		{
			if(array[i] > maximo)
			{
				maximo = array[i];
			}
		}
		*pResultado = maximo;
		retorno = 0;
	}

	return retorno;
}

// funcion que calcula el elemento minimo int de un array
int arr_calcularMinimoInt(int array[], int limite, int* pResultado,int* pPosicionMinimo)
{
	int retorno = -1;
	int i;
	int minimo;
	int bufferI;

	if(array != NULL && limite > 0 && pResultado != NULL)
	{
		minimo = array[0];
		for(i=0; i<limite; i++)
		{
			if(array[i] < minimo)
			{
				minimo = array[i];
				bufferI = i;
			}
		}
		*pResultado = minimo;
		*pPosicionMinimo = bufferI;
		retorno = 0;
	}

	return retorno;
}

//funcion que recorre un array y calcula el promedio
int arr_calcularPromedioInt(int array[], int limite, float* pResultado)
{
	int retorno = -1;
	int i;
	int acumulador=0;

	if(array != NULL && limite > 0 && pResultado != NULL)
	{
		for(i=0; i<limite; i++)
		{
			acumulador = acumulador + array[i];
		}
		*pResultado = (float)acumulador / limite;
		retorno = 0;
	}

	return retorno;
}

// funcion que carga valores por teclado en un array
int arr_cargarValoresInt(int array[], int limite)
{
	int retorno =-1;
	int i;
	int valorIngresado;

	if(array != NULL && limite >= 0)
	{
		for( i=0; i<limite; i++)
		{
			if(utn_getNumero(&valorIngresado, "\nIngrese el valor", "\nFuera de parametro\n",
																    	 -32000, 32000, 2)==0)
			{
				array[i] = valorIngresado;
				printf("\n%d ingresado en posicion %d\n", valorIngresado, i);
			}
		}
		retorno = 0;
	}
	return retorno;
}













