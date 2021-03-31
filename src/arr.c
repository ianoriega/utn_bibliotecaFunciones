#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

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

int arr_calcularMinimoInt(int array[], int limite, int* pResultado)
{
	int retorno = -1;
	int i;
	int minimo;

	if(array != NULL && limite > 0 && pResultado != NULL)
	{
		minimo = array[0];
		for(i=0; i<limite; i++)
		{
			if(array[i] < minimo)
			{
				minimo = array[i];
			}
		}
		*pResultado = minimo;
		retorno = 0;
	}

	return retorno;
}


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

