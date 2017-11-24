/*
 * format.h
 *
 *  Created on: 2016/11/01
 *      Author: suwa
 */

#ifndef FORMAT_H_
#define FORMAT_H_
#include<stdio.h>
#include<string.h>
#include "calc.h"

int strlenCheck(char *);
int formatCheck(char *);
int reversePolish(char *,char outstr[256]);
void createOutputStatement(char *,char *);
#endif /* FORMAT_H_ */
