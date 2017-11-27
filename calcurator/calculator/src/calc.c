/*
 * calc.c
 *
 *  Created on: 2016/11/02
 *      Author: suwa
 */
#include "calc.h"

int32_t calc(char *repolish,int32_t *calculationResult) {
	(void) printf("%s\n",repolish);
	double stack[256];
	int32_t stackindex = 0;
	int32_t cnt;
	int32_t tmp = 0;
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
			stack[stackindex] = tmp * 10 + (int32_t)(*(repolish + cnt) - '0');
			if(stack[stackindex] < 0){
				*calculationResult = 0;
				return 8;
			}
				tmp = 0;
				stackindex++;
				cnt++;
			}else{
			tmp = tmp * 10 + (int32_t)(*(repolish + cnt) - '0');
			}
			break;
		case '+':
			if(stack[stackindex - 2] + stack[stackindex - 1] > INT_MAX){
				*calculationResult = 0;
				return 6;//overflow
			}else{
				stack[stackindex - 2] = stack[stackindex - 2] + stack[stackindex - 1];
				stackindex--;
			}
			break;
		case '-':
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
			/* do noting */
			break;
		}
	}
	if (stack[0] > 0){
		stack[0] = stack[0] + 0.5;
	}else{
		stack[0] = stack[0] - 0.5;
	}
	*calculationResult = (int32_t)stack[0];

	return 0;

}
