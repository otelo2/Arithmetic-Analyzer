//Arithmetic analyzer for the Theory of computation course
//TODO: Add the ID's
//José Antonio Solís Martínez. 162442
//María Fernanda Flores Luna. 16XXXX
//Mauricio Raul Tenorio Guzman. 16XXXX
//Jorge André Tenorio Guzman. 16XXXX
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char string[60];
    int ascii[60];

    printf("Input your arithmetic expression: ");
    fgets(string, 60, stdin);

    //printf("Read:\n");
    //puts(string);

    for (int i = 0; i <= strlen(string); i++)
    {
        //Typecast each character into an integer. ASCII
        ascii[i] = (int)string[i];
        
        //Ignore whitespaces, EOL, etc.
        if(ascii[i] > 32)
        {
            //printf("%c = %d\n",string[i], ascii[i]);
            printf("Token text: %c\n",string[i]);

            //We need to recognize the arithmetic operators by name (ADD, MULTIPLY, etc), numbers and letters are OPERAND
            switch (ascii[i])
            {
            // +
            case 43:
                printf("Token lexical category: ADD\n");
                break;
            // -
            case 45:
                printf("Token lexical category: SUBTRACT\n");
                break;
            // *
            case 42:
                printf("Token lexical category: MULTIPLY\n");
                break;
            // /
            case 47:
                printf("Token lexical category: DIVIDE\n");
                break;
            // %
            case 37:
                printf("Token lexical category: MODULO\n");
                break;
            // check if OPERAND. Yes I can have the following as just one if, but i want to ask if I can further specify what type of operand
            default:
                //Is a number 0-9
                if (ascii[i] >= 48 && ascii[i] <= 57)
                {
                    printf("Token lexical category: OPERAND\n");
                }
                //Is a letter A-Z
                else if (ascii[i] >= 65 && ascii[i] <= 90)
                {
                    printf("Token lexical category: OPERAND\n");
                }
                //Is a letter a-z
                else if (ascii[i] >= 97 && ascii[i] <= 122)
                {
                    printf("Token lexical category: OPERAND\n");
                }
                else
                {
                    ; //Do nothing lol
                }
                
                
                
            }
            
        }

    }
    

    return 0;
}