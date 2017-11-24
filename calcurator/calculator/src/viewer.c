/*
 * viewer.c
 *
 *  Created on: 2016/10/28
 *      Author: suwa
 */

#include "viewer.h"

void inputconsole(char *str2){

	//char str1[256];
	fgets(str2,256,stdin);

	//*str2 = *str1;
}

void outputconsole(char str1[256]){
	int i;
	for(i = 0;str1[i] != '\0';i++)
	printf("%c ",str1[i]);
}
//void outputconsole(char *str1){
//  printf("%s\n",str1);
//}
