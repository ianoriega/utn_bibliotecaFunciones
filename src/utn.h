
#ifndef UTN_H_
#define UTN_H_

/*
 * getNumero: le pide numeros al usuario con reintentos
 *
 */
int utn_getNumero(int* pAuxNumero,char* pTexto,char* pError,int minimo,int maximo,int reintento);

/*
 * getChar: le pide carcteres al usuario
 */
int utn_getChar(char* pAuxChar,char* pTexto,char* pError,char minimo,char maximo,int reintento);

/*
 * getFloat: le pide un numero float al usuario
 */
int utn_getFloat(float* pAuxFloat,char* pTexto,char* pError,float minimo,float maximo,int reintento);


#endif /* UTN_H_ */
