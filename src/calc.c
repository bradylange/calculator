#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>

/*
 * Brady Lange
 * 3/6/18
 * File: calc.c
 * This program takes two integers and based upon the operation inputted calculated
 */

int main(int argc, char *argv[]){

		// Variables
		// Setting the operator the fourth input
        char operator;
		operator = argv[3][0];
        int equals;
		// Testing if the input is a charcter in each input 
        char wrong1 = argv[1][0];
        char wrong2 = argv[2][0];
		
		// If the numbers of inputs is not 4 a usage error will be thrown
        if (argc != 4)
        {
			printf("\nUsage: calc value1 value2 operator");
			return 1;
        }
		
		// If the the two inputs to be calculated are not digits an error will be thrown
        if ((!isdigit(wrong1)) || (!isdigit(wrong2)))
        {
			printf("Calc error: Operands must be integers!");
			return 2;
        }

		// If there is no errors the input can be calculated
        else
        {
			// Changing the input into integers
			int num1, num2;
			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);

			switch(operator)
			{
				case '+':
					equals = num1 + num2;
					break;
				case '-':
					equals = num1 - num2;
					break;
				case 'x':
					equals = num1 * num2;
					break;
				case '/': 
					equals = num1 / num2;
					break;
				case '%':
					equals = num1 % num2;
					break;
				default :
					printf("Calc error: The operator must be: +, -, x, /, or '%'");
					return 1;
			}

			printf("The result = %d\n", equals);
        }
		
        return 0;

} // End of main method

