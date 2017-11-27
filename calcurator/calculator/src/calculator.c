/*
 ============================================================================
 Name        : calculator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "viewer.h"
#include "format.h"
#include "calc.h"
int32_t main(void) {
	char str1[256];
	int32_t result;
	char str2[256];
	inputconsole(str1);
	createOutputStatement(str1,str2);
	(void) printf("%s\n",str2);
	return EXIT_SUCCESS;
}
