
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include "utn.h"
#include "arr.h"


int utn_getNumero(int* numeroObtenido,int limite, char* pTexto,char* pError,int minimo,int maximo,int reintento)
{
	int retorno = -1;
	char bufferNumeros[limite];
	int bufferInt;

	if(numeroObtenido != NULL && pTexto != NULL && pError != NULL && minimo <= maximo && reintento >= 0)
	{
		retorno = -2;

		do
		{
			printf("%s", pTexto);

			__fpurge(stdin);
			fgets(bufferNumeros,limite,stdin);
			if(bufferNumeros[strlen(bufferNumeros)-1]==10)
			{
				bufferNumeros[strlen(bufferNumeros)-1] = 0;
			}

			if(utn_validarQueSeaNumero(bufferNumeros)==1)
			{
				bufferInt = atoi(bufferNumeros);

				if(bufferInt <= maximo && bufferInt >= minimo)
				{
					*numeroObtenido = bufferInt;
					retorno = 0;
					break;
				}
				else
				{
					printf("%s\n",pError);
				}
			}
			else
			{
				printf("\ncaracteres no numericos\n");
			}

			reintento--;
		}while(reintento>= 0);
	}

	return retorno;
}

int utn_getChar(char pAuxChar[],int limite,char* pTexto,char* pError,int reintento)
{
	int retorno = -1;


	if(pAuxChar != NULL && pTexto != NULL && pError != NULL && reintento >= 0 && limite >0)
	{
		retorno = -2;

		do
		{
			printf("%s", pTexto);

			__fpurge(stdin);
			fgets(pAuxChar,limite,stdin);
			if(pAuxChar[strlen(pAuxChar)-1]==10)
			{
				pAuxChar[strlen(pAuxChar)-1] = 0;
			}

			if(utn_validarQueSeaChar(pAuxChar)==1)
			{
				retorno =0;
				break;
			}
			else
			{
				printf("\n El caracter ingresado no es una letra");
			}

			reintento--;

		}while(reintento>= 0);
	}

	return retorno;
}

/*
 * le pide al usuario un numero float
 */
int utn_getFloat(float* numeroObtenido,int limite, char* pTexto,char* pError,float minimo,float maximo,int reintento)

{
	int retorno = -1;
	char bufferNumeros[limite];
	float bufferFloat;

	if(numeroObtenido != NULL && limite >=0 && pTexto != NULL && pError != NULL && minimo <= maximo && reintento >= 0)
	{
		retorno = -2;

		do
		{
			printf("%s", pTexto);

			__fpurge(stdin);
			fgets(bufferNumeros,limite,stdin);
			if(bufferNumeros[strlen(bufferNumeros)-1]==10)
			{
				bufferNumeros[strlen(bufferNumeros)-1] = 0;
			}

			if(utn_validarQueSeaFloat(bufferNumeros)==1)
			{
				bufferFloat = atof(bufferNumeros);

				printf("\n%f",bufferFloat);

				if(bufferFloat <= maximo && bufferFloat >= minimo)
				{
					*numeroObtenido = bufferFloat;
					retorno = 0;
					break;
				}
				else
				{
					printf("%s\n",pError);
				}
			}
			else
			{
				printf("\ncaracteres no numericos\n");
			}

			reintento--;
		}while(reintento>= 0);
	}

	return retorno;
}
/*{
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
*/

/*
 * rand() genera un numero entero aleatorio entre dos parametros
 */

int utn_getRandomNumber(int* pRandom, int minimo, int maximo)
{
	int numeroCreado;


	do
	{
		//srand(time(NULL));
		numeroCreado = minimo + (rand() % maximo +1 - minimo);

	}while(numeroCreado < minimo || numeroCreado > maximo);


	*pRandom = numeroCreado;

	return 0;
}


/*
 * valida que la cadena ingresada tenga numeros
 */
int utn_validarQueSeaNumero(char texto[])
{
	int i=0;
	int retorno;

	if(texto != NULL)
	{
		retorno =1;
		while(texto[i]!=0)
		{
			if(texto[i] < 48 || texto[i] >57)
			{
				retorno = -1;
				break;
			}

			i++;
		}
	}
	return retorno;

}

int utn_validarQueSeaChar(char texto[])
{
	int i=0;
	int retorno;

	if(texto != NULL)
	{
		retorno =1;
		while(texto[i] !=0)
		{
			if(texto[i] < 'A' || texto[i] > 'z')
			{
				retorno = -1;
				break;
			}
			i++;
		}
	}
	return retorno;
}

int utn_validarQueSeaFloat(char texto[])
{
	int i=0;
	int retorno;

	if(texto != NULL)
	{
		retorno =1;
		while(texto[i]!=0)
		{
			if(texto[i] < 46 || texto[i] >57 || texto[i] == 47)
			{
				retorno = -1;
				break;
			}

			i++;
		}
	}
	return retorno;

}









