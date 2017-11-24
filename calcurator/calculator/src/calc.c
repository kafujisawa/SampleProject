/*
 * calc.c
 *
 *  Created on: 2016/11/02
 *      Author: suwa
 */
#include "calc.h"

int calc(char *repolish,int *calculationResult) {
	printf("%s\n",repolish);
	double stack[256];
	int stackindex = 0;
	int cnt;
	int tmp = 0;
	double overflow_check;
	for (cnt = 0; *(repolish + cnt) != '\0'; cnt++) {
		switch (*(repolish + cnt)) {
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '0':
			if(*(repolish + cnt + 1) == ','){
			stack[stackindex] = tmp * 10 + (int)(*(repolish + cnt) - '0');
			if(stack[stackindex] < 0){
				*calculationResult = 0;
				return 8;
			}
				tmp = 0;
				stackindex++;
				cnt++;
			}else{
			tmp = tmp * 10 + (int)(*(repolish + cnt) - '0');;
			}
			break;
		case '+':
			//overflow_check = INT_MAX - stack[stackindex - 2];
			//if(stack[stackindex - 1] > overflow_check){
			if(stack[stackindex - 2] + stack[stackindex - 1] > INT_MAX){
				*calculationResult = 0;
				return 6;//overflow
			}else{
				stack[stackindex - 2] = stack[stackindex - 2] + stack[stackindex - 1];
				stackindex--;
			}
			break;
		case '-':
			//overflow_check = INT_MIN + stack[stackindex - 1];
			//if(stack[stackindex - 2] < overflow_check){
			if(stack[stackindex - 2] - stack[stackindex - 1] < INT_MIN){
				*calculationResult = 0;
				return 7;//underflow
			}else{
				stack[stackindex - 2] = stack[stackindex - 2] - stack[stackindex - 1];
				stackindex--;
			}
			break;
		case '*':
			overflow_check = stack[stackindex - 2] * stack[stackindex - 1];
			//if(stack[stackindex - 1] != overflow_check / stack[stackindex - 2]){
			if(overflow_check > INT_MAX){
				*calculationResult = 0;
				return 6;//overflow
			}else if (overflow_check < INT_MIN){
				*calculationResult = 0;
				return 7;//underflow
			}else{
				stack[stackindex - 2] = overflow_check;
				stackindex--;
			}
			break;
		case '/':
			if(stack[stackindex - 1] == 0){
				*calculationResult = 0;
				return 5;
			}
			stack[stackindex - 2] = stack[stackindex - 2] / stack[stackindex - 1];
			stackindex--;
			break;
		default:
			break;
		}
	}
	if (stack[0] > 0){
		stack[0] = stack[0] + 0.5;
	}else{
		stack[0] = stack[0] - 0.5;
	}
	*calculationResult = (int)stack[0];

	return 0;

}
