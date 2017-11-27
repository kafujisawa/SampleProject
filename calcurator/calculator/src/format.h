/*
 * format.h
 *
 *  Created on: 2016/11/01
 *      Author: suwa
 */

#ifndef FORMAT_H_
#define FORMAT_H_
#include <stdio.h>
#include <string.h>
#include "calc.h"

int32_t strlenCheck(char *instr);
int32_t formatCheck(char *instr);
int32_t reversePolish(char *ptr, char outstr[256]);
void createOutputStatement(char* instr,char outstr[256]);
#endif /* FORMAT_H_ */
