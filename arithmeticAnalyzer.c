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

    printf("Read:\n");
    puts(string);

    printf("Starting conversion\n");
    for (int i = 0; i <= strlen(string); i++)
    {
        //Typecast each character into an integers, hopefully ascii?
        ascii[i] = (int)string[i];
        printf("%c = %d\n",string[i], ascii[i]);
    }
    

    return 0;
}