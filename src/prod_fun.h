typedef struct sProducto
{
	char nombre[50];
	char descripcion[100];
	float precio;
	int flagIsEmpty;
	int posicion;
	int ID;
}producto;

#ifndef PROD_FUN_H_
#define PROD_FUN_H_

/**
 * \brief marca todos las posiciones del array como empty
 *\param producto array[] recibe direccion de memoria del array
 *\param int limiteArray recibe el limite de posiciones del array
 *\return retorna 0 si pudo validar los datos y -1 si no pudo
 */
int prod_flagEmpty(producto array[],int limiteArray);

/**
 * \brief permite cargar los datos del producto a traves del indice del array
 *\param producto array[] recibe direccion de memoria del array
 *\param int indice recibe la posicion donde cargar los datos en el array
 *\param int limite limite del array en cuestion
 *\param int minimo recibe el valor minimo para crear el ID
 *\param int maximo recibe el valor maximo para crear el ID
 *\return retorna 0 si pudo validar los datos y procesar, retorna -1 si no pudo
 */
int prod_cargarIndice(producto array[],int limite, int indice, int minimo, int maximo);

/**
 * \brief permite imprimir los datos del producto a traves del indice del array
 *\param producto array[] recibe direccion de memoria del array
 *\param int indice recibe la posicion a imprimir
 *\return retorna 0 si pudo validar los datos y procesar, retorna -1 si no pudo
 */
int prod_imprimirIndice(producto array[], int indice);

/**
 * \brief marca todos las posiciones del array vacias
 *\param producto array[] recibe direccion de memoria del array
 *\param int limiteArray recibe el limite de posiciones del array
 *\param int pPosicionVacia recibe &variable para  devolver el indice obtenido
 *\return retorna 0 si pudo validar los datos y pudo procesar, -1 si no pudo
 */
int prod_posicionVacia(producto array[],int limiteArray, int* pPosicionVacia);


#endif /* PROD_FUN_H_ */
