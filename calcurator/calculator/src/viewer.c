/*
 * viewer.c
 *
 *  Created on: 2016/10/28
 *      Author: suwa
 */

#include "viewer.h"

void inputconsole(char *str2){

	(void) fgets(str2,256,stdin);

}

void outputconsole(char str1[256]){
	int32_t i;
	for(i = 0;str1[i] != '\0';i++)
	{
		(void) printf("%c ",str1[i]);
	}
}
