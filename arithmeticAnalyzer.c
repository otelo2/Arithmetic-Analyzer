//Arithmetic analyzer for the Theory Of Computation course

//TODO: recognize 555 as 555 instead of 5 5 5

//José Antonio Solís Martínez. 162442
//María Fernanda Flores Luna. 162064
//Mauricio Raul Tenorio Guzman. 162106
//Jorge André Tenorio Guzman. 162107
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char string[60];
    char temp[60] = "";
    int ascii[60];
    int finalArray[60];
    int currentNumber=99999;
    int countNumber=0;
    int valComplex=0;
    int i, j, index=0;
    bool first=true;

    printf("Input your arithmetic expression: ");
    fgets(string, 60, stdin);

    //printf("Read:\n");
    //puts(string);

    for (i = 0; i < strlen(string); i++)
    {
        //Typecast each character into an integer. ASCII
        ascii[i] = (int)string[i];
        //Print the info of each character for debugging
        printf("i = %d . ascii = %d . char = %c . countNumber = %d . first = %d\n",i,ascii[i], string[i], countNumber,first);
    }

    for (int i = 0; i <= strlen(string); i++)
    {
        //Ignore whitespaces, EOL, etc.
        if(ascii[i] > 32)
        {
            //We need to recognize the arithmetic operators by name (ADD, MULTIPLY, etc), numbers and letters are OPERAND
            switch (ascii[i])
            {
            // +
            case 43:
                printf("Token text: %c\n",string[i]);
                printf("Token lexical category: ADD\n");
                break;
            // -
            case 45:
                printf("Token text: %c\n",string[i]);
                printf("Token lexical category: SUBTRACT\n");
                break;
            // *
            case 42:
                printf("Token text: %c\n",string[i]);
                printf("Token lexical category: MULTIPLY\n");
                break;
            // /
            case 47:
                printf("Token text: %c\n",string[i]);
                printf("Token lexical category: DIVIDE\n");
                break;
            // %
            case 37:
                printf("Token text: %c\n",string[i]);
                printf("Token lexical category: MODULO\n");
                break;
            //Is a number 0-9
            case 48 ... 57:
                valComplex = ascii[i]-48; //Use the numerical value
                i++;
                while (ascii[i]>=48 && ascii[i]<=57)
                {
                    valComplex = (valComplex*10) + (ascii[i]-48);
                    i++;
                }
                printf("Token text: %d\n",valComplex);
                printf("Token lexical category: OPERAND\n");
                valComplex=0;
                break;
            //Is a letter A-Z
            case 65 ... 90:
                printf("Token text: %c\n",string[i]);
                printf("Token lexical category: OPERAND\n");
                break;
            //Is a letter a-z
            case 97 ... 122:
                printf("Token text: %c\n",string[i]);
                printf("Token lexical category: OPERAND\n");
                break;
            default:
                break;
            }
            
        }
    }
    
    return 0;
}