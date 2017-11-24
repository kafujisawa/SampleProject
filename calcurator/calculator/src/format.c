/*
 * format.c
 *
 *  Created on: 2016/10/28
 *      Author: suwa
 */
#include "format.h"

int strlenCheck(char *instr){
	printf("%s\n",instr);
	int len = strlen(instr);
	if(len == 0){
		return 1;
	}else if(len > 255){
		return 2;
	}else{
		return 0;
	}
}

int formatCheck(char* instr){
	int cnt;
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


int reversePolish(char* ptr,char outstr[256]){
	char opstack[256];
	//char outstr[256];
	int opindex = 0;
	int cnt = 0,outcnt = 0,numcnt = 0,opcnt = 0,numflg = 0;
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
			if(numflg){
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
				//opstack[opindex] = *(ptr + cnt);
				//opindex++;
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
				memset(outstr,'\0',strlen(outstr));
				return 4;
			}
			opstack[opindex] = *(ptr + cnt);
			opindex++;
			break;
		case ')':
			numflg = 0;
			if (*(ptr + cnt - 1) == '+' || *(ptr + cnt - 1) == '-' || *(ptr + cnt - 1) == '*'|| *(ptr + cnt - 1) == '/'){
				memset(outstr,'\0',strlen(outstr));
				return 4;
			}
			while(opstack[opindex -1] != '('){
				if(opindex <= 1){
					memset(outstr,'\0',strlen(outstr));
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
			break;
		}
	}
	if(numcnt != opcnt + 1){
		memset(outstr,'\0',strlen(outstr));
		return 4;
	}
		while(opindex > 0){
			if(opstack[opindex -1] == '('){
				memset(outstr,'\0',strlen(outstr));
				return 4;
			}
			outstr[outcnt] = opstack[opindex - 1];
			outcnt++;
			opindex--;
			outstr[outcnt] = ',';
			outcnt++;
		}
		outstr[outcnt -1] = '\0';

		//otr = outstr;

		return 0;

		//printf("%c\n",*(ptr + cnt));

}

void createOutputStatement(char* instr,char outstr[256]){

	int errorflg = 0;
	int result;
	char repolish[256];
	errorflg = strlenCheck(instr);
	if(errorflg){
		if(errorflg == 1){
			strcpy(outstr,"エラー：入力がありません。");
			return;
		}
		else{
			strcpy(outstr,"エラー：入力された数式が長すぎます。");
			return ;
		}
	}else if(formatCheck(instr)){
		strcpy(outstr,"エラー：扱えない文字・記号が含まれています。");
		return;
	}else if(reversePolish(instr,repolish)){
		strcpy(outstr,"エラー：数式ではありません。");
		return;
	}else if(errorflg = calc(repolish,&result)){
		if(errorflg == 5){
			strcpy(outstr,"エラー：０除算が含まれます。");
			return;
		}else if(errorflg == 6){
			strcpy(outstr,"エラー：オーバーフロー（出力）。");
			return;
		}else if(errorflg == 7){
			strcpy(outstr,"エラー：アンダーフロー。");
			return;
		}else{
			strcpy(outstr,"エラー：オーバーフロー（入力）。");
			return;
		}
	}
	printf("%s\n",repolish);
	sprintf(outstr,"計算結果は%dです。",result);
}
