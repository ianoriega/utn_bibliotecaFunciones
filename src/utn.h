
#ifndef UTN_H_
#define UTN_H_

/*
 * getNumero: le pide numeros al usuario con reintentos
 *
 */
int utn_getNumero(int* numeroObtenido,int limite, char* pTexto,char* pError,int minimo,int maximo,int reintento);

/*
 * getChar: le pide carcteres al usuario
 */
int utn_getChar(char pAuxChar[],int limite,char* pTexto,char* pError,int reintento);

/*
 * getFloat: le pide un numero float al usuario
 */
int utn_getFloat(float* numeroObtenido,int limite, char* pTexto,char* pError,float minimo,float maximo,int reintento);

/*
 * genera un numero aleatorio comprendido entre un minimo y un maximo
 */
int utn_getRandomNumber(int* pRandom, int minimo, int maximo);


/*
 * valida que la cadena ingresada tenga numeros
 */
int utn_validarQueSeaNumero(char texto[]);

/*
 * valida que la cadena sea de char
 */
int utn_validarQueSeaChar(char texto[]);



int utn_validarQueSeaFloat(char texto[]);


#endif /* UTN_H_ */
