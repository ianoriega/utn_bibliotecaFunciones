
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int utn_getNumero(int* pAuxNumero,char* pTexto,char* pError,int minimo,int maximo,int reintento)
{
	int retorno = -1;
	int bufferInt;

	if(pAuxNumero != NULL && pTexto != NULL && pError != NULL && minimo <= maximo && reintento >= 0)
	{
		retorno = -2;

		do
		{
			printf("%s", pTexto);
			__fpurge(stdin);
			if(scanf("%d",&bufferInt)==1)
			{
				if((bufferInt) <= maximo && (bufferInt) >= minimo)
				{
					retorno = 0;
					*pAuxNumero = bufferInt;
					break;
				}
				else
				{
					printf("%s\n",pError);
				}
			}
			else
			{
				printf("%s\n",pError);
			}
			reintento--;
		}while(reintento>= 0);
	}

	return retorno;
}

int utn_getChar(char* pAuxChar,char* pTexto,char* pError,char minimo,char maximo,int reintento)
{
	int retorno = -1;
	char bufferChar;

	if(pAuxChar != NULL && pTexto != NULL && pError != NULL && minimo <= maximo && reintento >= 0)
	{
		retorno = -2;

		do
		{
			printf("%s", pTexto);
			__fpurge(stdin);
			if(scanf("%c",&bufferChar)==1)
			{
				if((bufferChar) <= maximo && (bufferChar) >= minimo)
				{
					retorno = 0;
					*pAuxChar = bufferChar;
					break;
				}
				else
				{
					printf("%s\n",pError);
				}
			}
			else
			{
				printf("%s\n",pError);
			}
			reintento--;
		}while(reintento>= 0);
	}

	return retorno;
}

/*
 * le pide al usuario un numero float
 */
int utn_getFloat(float* pAuxFloat,char* pTexto,char* pError,float minimo,float maximo,int reintento)
{
	int retorno = -1;
	float bufferFloat;

	if(pAuxFloat != NULL && pTexto != NULL && pError != NULL && minimo <= maximo && reintento >= 0)
	{
		retorno = -2;

		do
		{
			printf("%s", pTexto);
			__fpurge(stdin);
			if(scanf("%f",&bufferFloat)==1)
			{
				if((bufferFloat) <= maximo && (bufferFloat) >= minimo)
				{
					retorno = 0;
					*pAuxFloat = bufferFloat;
					break;
				}
				else
				{
					printf("%s\n",pError);
				}
			}
			else
			{
				printf("%s\n",pError);
			}
			reintento--;
		}while(reintento>= 0);

	}

	return retorno;
}

/*
 * rand() genera un numero entero aleatorio entre dos parametros
 */

int utn_getRandomNumber(int* pRandom, int minimo, int maximo)
{
	int numeroCreado;


	do
	{
		srand(time(NULL));
		numeroCreado = minimo + (rand() % maximo +1 - minimo);

	}while(numeroCreado < minimo || numeroCreado > maximo);


	*pRandom = numeroCreado;

	return 0;
}













