
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int utn_getNumero(int* pAuxNumero,char* pTexto,char* pError,int minimo,int maximo,int reintento)
{
	int retorno = -1;

	do
	{
		printf("%s", pTexto);
		__fpurge(stdin);
		if(scanf("%d",pAuxNumero)==1)
		{
			if((*pAuxNumero) <= maximo && (*pAuxNumero) >= minimo)
			{
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
			printf("%s\n",pError);
		}
		reintento--;
	}while(reintento>= 0);


	return retorno;
}

int utn_getChar(char* pAuxChar,char* pTexto,char* pError,char minimo,char maximo,int reintento)
{
	int retorno = -1;

	do
	{
		printf("%s", pTexto);
		__fpurge(stdin);
		if(scanf("%c",pAuxChar)==1)
		{
			if((*pAuxChar) <= maximo && (*pAuxChar) >= minimo)
			{
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
			printf("%s\n",pError);
		}
		reintento--;
	}while(reintento>= 0);


	return retorno;
}

int utn_getFloat(float* pAuxFloat,char* pTexto,char* pError,float minimo,float maximo,int reintento)
{
	int retorno = -1;

	do
	{
		printf("%s", pTexto);
		__fpurge(stdin);
		if(scanf("%f",pAuxFloat)==1)
		{
			if((*pAuxFloat) <= maximo && (*pAuxFloat) >= minimo)
			{
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
			printf("%s\n",pError);
		}
		reintento--;
	}while(reintento>= 0);


	return retorno;
}















