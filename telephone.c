/*
Arthur Carlos da Rocha Silva
Exercicio Spoj.com ENCOTEL - Encontre o telefone
*/

#include <stdio.h>
#include "string.h"

int main()
{
	//Variables
	char expr[30]; //the input line
	char code[30]; //the corresponding code for each line

	while (scanf("%s", & expr) != EOF) {//Read next line of the file. Stop only when reaching the end 
		int i;
		for (i = 0; i < strlen(expr); i++){ //Converting string to numbers
			if ((expr[i] == '1') || (expr[i] == '0') || (expr[i] == '-')) {  // if char is 1 , 0 or - do nothing
				code[i] = expr[i];
			}
			else if ((expr[i] == 'A') || (expr[i] == 'B') || (expr[i] == 'C')) { //letters ABC
				code[i] = '2';
			}

			else if ((expr[i] == 'D') || (expr[i] == 'E') || (expr[i] == 'F')) { //letters DEF
				code[i] = '3';
			}

			else if ((expr[i] == 'G') || (expr[i] == 'H') || (expr[i] == 'I')) { //letters GHI
				code[i] = '4';
			}

			else if ((expr[i] == 'J') || (expr[i] == 'K') || (expr[i] == 'L')) { //letters JKL
				code[i] = '5';
			}

			else if ((expr[i] == 'M') || (expr[i] == 'N') || (expr[i] == 'O')) { //letters MNO
				code[i] = '6';
			}

			else if ((expr[i] == 'P') || (expr[i] == 'Q') || (expr[i] == 'R') || (expr[i] == 'S')) { //letters PQRS
				code[i] = '7';
			}

			else if ((expr[i] == 'T') || (expr[i] == 'U') || (expr[i] == 'V')) { //letters TUV
				code[i] = '8';
			}

			else if ((expr[i] == 'W') || (expr[i] == 'X') || (expr[i] == 'Y') || (expr[i] == 'Z')) { //letters WXYZ
				code[i] = '9';
			}

		} // end for loop
		code[i] = '\0'; //when the end of the string is reached, set the end of the code string 
		printf("%s\n", code);//printing output

	}//end while loop 

}// end main