
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include "utn.h"
#include "arr.h"
#include "prod_fun.h"

/**
 * \brief marca todos las posiciones del array como empty
 *\param producto array[] recibe direccion de memoria del array
 *\param int limiteArray recibe el limite de posiciones del array
 *\return retorna 0 si pudo validar los datos y -1 si no pudo
 */
int prod_flagEmpty(producto array[],int limiteArray)
{
	int retorno = -1;
	int i;

	if(array != NULL && limiteArray != 0)
	{
		for(i=0; i<limiteArray; i++)
		{
			array[i].flagIsEmpty = 1;
		}

		retorno =0;
	}
	return retorno;
}


/**
 * \brief permite cargar los datos del producto a traves del indice del array
 *\param producto array[] recibe direccion de memoria del array
 *\param int indice recibe la posicion donde cargar los datos en el array
 *\param int limite limite del array en cuestion
 *\param int minimo recibe el valor minimo para crear el ID
 *\param int maximo recibe el valor maximo para crear el ID
 *\return retorna 0 si pudo validar los datos y procesar, retorna -1 si no pudo
 */
int prod_cargarIndice(producto array[],int limite, int indice, int minimo, int maximo)
{
	int retorno = -1;
	float bufferPrecio;
	int nuevoId;
	int i;
	int flagIdRepetido;

	if(array != NULL && indice<limite && maximo >minimo)
	{
		do
		{
			flagIdRepetido =1;

			do
			{
				srand(time(NULL));
				nuevoId = minimo + (rand() % maximo +1 - minimo);

			}while(nuevoId < minimo || nuevoId > maximo);

			for(i=0;i<limite;i++)
			{
				if(array[i].ID == nuevoId)
				{
					break;
				}

				flagIdRepetido =0;
			}

		}while(flagIdRepetido);

		array[indice].ID = nuevoId;

		if(utn_getChar(array[indice].nombre, 50, "\nIngrese el nombre del producto", "\nFuera de parametro",
																									  1)==0)
		{
			if(utn_getChar(array[indice].descripcion, 100, "\nIngrese la descripcion del producto",
																			  "\nFuera de parametro", 1)==0)
			{
				if(utn_getFloat(&bufferPrecio, 50, "\nIngrese el precio del producto", "\nFuera de parametro",
																						   0, 9999999, 1)==0)
				{
					array[indice].precio = bufferPrecio;
					array[indice].flagIsEmpty =0;
					array[indice].posicion =indice;

					retorno =0;
				}
			}
		}
	}
	return retorno;
}

/**
 * \brief permite imprimir los datos del producto a traves del indice del array
 *\param producto array[] recibe direccion de memoria del array
 *\param int indice recibe la posicion a imprimir
 *\return retorna 0 si pudo validar los datos y procesar, retorna -1 si no pudo
 */
int prod_imprimirIndice(producto array[], int indice)
{
	int retorno = -1;

	if(array != NULL && indice >=0)
	{
		printf("\n");
		printf("\n---------------------------");
		printf("\nProducto Nro: \n%d",indice);
		printf("\nNombre producto:\n%s",array[indice].nombre);
		printf("\nDescripcion producto:\n%s",array[indice].descripcion);
		printf("\nPrecio producto:\n%.2f",array[indice].precio);
		printf("\nID del producto:\n%d",array[indice].ID);
		printf("\n---------------------------");
		printf("\n");

		retorno =0;
	}

	return retorno;
}

/**
 * \brief marca todos las posiciones del array vacias
 *\param producto array[] recibe direccion de memoria del array
 *\param int limiteArray recibe el limite de posiciones del array
 *\param int pPosicionVacia recibe &variable para  devolver el indice obtenido
 *\return retorna 0 si pudo validar los datos y pudo procesar, -1 si no pudo
 */
int prod_posicionVacia(producto array[],int limiteArray, int* pPosicionVacia)
{
	int retorno =-1;
	int i;

	if(array != NULL && limiteArray >= 0)
	{

		for(i=0;1<limiteArray;i++)
		{
			if(array[i].flagIsEmpty == 1)
			{
				*pPosicionVacia = i;
				retorno = 0;
				break;
			}
		}
	}

	return retorno;
}

















