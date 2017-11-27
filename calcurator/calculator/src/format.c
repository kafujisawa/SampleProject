/*
 * format.c
 *
 *  Created on: 2016/10/28
 *      Author: suwa
 */
#include "format.h"

int32_t strlenCheck(char *instr){
	(void) printf("%s\n",instr);
	int32_t len = strlen(instr);
	if(len == 0){
		return 1;
	}else if(len > 255){
		return 2;
	}else{
		return 0;
	}
}

int32_t formatCheck(char* instr){
	int32_t cnt;
	char c;
	for (cnt = 0; *(instr + cnt) != '\0'; cnt++) {
		c = *(instr + cnt);
		if(c == '1' || c == '2'|| c == '3'|| c == '4'|| c == '5'|| c == '6'|| c == '7'
				|| c == '8'|| c == '9'|| c == '0'|| c == '+' || c == '-'|| c == '*'|| c == '/'|| c == '('|| c == ')' || c == '\n' || c == '\r'){
		}
		else{
			return 3;
		}
	}
	return 0;
}


int32_t reversePolish(char* ptr,char outstr[256]){
	char opstack[256];
	int32_t opindex = 0;
	int32_t cnt = 0,outcnt = 0,numcnt = 0,opcnt = 0,numflg = 0;
	for (cnt = 0; *(ptr + cnt) != '\0'; cnt++) {
		switch(*(ptr + cnt)){
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
			if(numflg == 1){
				outstr[outcnt - 1] = *(ptr + cnt);
				outstr[outcnt] = ',';
				outcnt++;
			}else{
				outstr[outcnt] = *(ptr + cnt);
				outcnt++;
				outstr[outcnt] = ',';
				outcnt++;
				numflg = 1;
				numcnt++;
			}
			break;
		case '+':
		case '-':
			numflg = 0;
			opcnt++;
			if(opindex == 0){
				opstack[opindex] = *(ptr + cnt);
				opindex++;
			}
			else if(opstack[opindex -1] == '+' || opstack[opindex -1] == '-'){
				outstr[outcnt] = opstack[opindex -1];
				outcnt++;
				outstr[outcnt] = ',';
				outcnt++;
				opstack[opindex - 1] = *(ptr + cnt);
			}else if(opstack[opindex -1] == '('){
				opstack[opindex] = *(ptr + cnt);
				opindex++;
			}else{
				while(opindex  > 0 && (opstack[opindex -1] == '*' || opstack[opindex -1] == '/')){
					outstr[outcnt] = opstack[opindex -1];
					opindex--;
					outcnt++;
					outstr[outcnt] = ',';
					outcnt++;
				}
				opstack[opindex] = *(ptr + cnt);
				opindex++;
			}
			break;
		case '*':
		case '/':
			numflg = 0;
			opcnt++;
			if(opstack[opindex -1] == '*' || opstack[opindex -1] == '/'){
				outstr[outcnt] = opstack[opindex -1];
				outcnt++;
				outstr[outcnt] = ',';
				outcnt++;
				opstack[opindex - 1] = *(ptr + cnt);
			}else{
				opstack[opindex] = *(ptr + cnt);
				opindex++;
			}
			break;
		case '(':
			numflg = 0;
			if (*(ptr + cnt + 1) == '+' || *(ptr + cnt + 1) == '-' || *(ptr + cnt + 1) == '*'|| *(ptr + cnt + 1) == '/'){
				(void) memset(outstr,'\0',strlen(outstr));
				return 4;
			}
			opstack[opindex] = *(ptr + cnt);
			opindex++;
			break;
		case ')':
			numflg = 0;
			if (*(ptr + cnt - 1) == '+' || *(ptr + cnt - 1) == '-' || *(ptr + cnt - 1) == '*'|| *(ptr + cnt - 1) == '/'){
				(void) memset(outstr,'\0',strlen(outstr));
				return 4;
			}
			while(opstack[opindex -1] != '('){
				if(opindex <= 1){
					(void) memset(outstr,'\0',strlen(outstr));
					return 4;
				}
				outstr[outcnt] = opstack[opindex -1];
				outcnt++;
				opindex--;
				outstr[outcnt] = ',';
				outcnt++;
			}
			opindex--;
		break;
		default:
			/* do noting */
			break;
		}
	}
	if(numcnt != opcnt + 1){
		(void) memset(outstr,'\0',strlen(outstr));
		return 4;
	}
		while(opindex > 0){
			if(opstack[opindex -1] == '('){
				(void) memset(outstr,'\0',strlen(outstr));
				return 4;
			}
			outstr[outcnt] = opstack[opindex - 1];
			outcnt++;
			opindex--;
			outstr[outcnt] = ',';
			outcnt++;
		}
		outstr[outcnt -1] = '\0';

		return 0;
}

void createOutputStatement(char* instr,char outstr[256]){

	int32_t errorflg = 0;
	int32_t result;
	char repolish[256];
	errorflg = strlenCheck(instr);
	if(errorflg != 0){
		if(errorflg = 1){
			(void) strcpy(outstr,"エラー：入力がありません。");
			return;
		}
		else{
			(void) strcpy(outstr,"エラー：入力された数式が長すぎます。");
			return ;
		}
	}else if(formatCheck(instr) != 0){
		(void) strcpy(outstr,"エラー：扱えない文字・記号が含まれています。");
		return;
	}else if(reversePolish(instr,repolish) != 0){
		(void) strcpy(outstr,"エラー：数式ではありません。");
		return;
	}else if((errorflg = calc(repolish,&result)) != 0){
		if(errorflg == 5){
			(void) strcpy(outstr,"エラー：０除算が含まれます。");
			return;
		}else if(errorflg == 6){
			(void) strcpy(outstr,"エラー：オーバーフロー（出力）。");
			return;
		}else if(errorflg == 7){
			(void) strcpy(outstr,"エラー：アンダーフロー。");
			return;
		}else{
			(void) strcpy(outstr,"エラー：オーバーフロー（入力）。");
			return;
		}
	}
	(void) printf("%s\n",repolish);
	(void) sprintf(outstr,"計算結果は%dです。",result);
}
