/*
 ============================================================================
 Name        : utnBiblioteca.c
 Author      : iñaki
 Version     :1
 Copyright   : Your copyright notice
 Description : biblioteca de la utn
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"

int main(void)
{
	float numero;
    utn_getFloat(&numero, "ingrese un float", "fuera de parametro", -50, 100, 2);
    printf("%.2f",numero);
}
