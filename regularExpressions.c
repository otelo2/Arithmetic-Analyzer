//Regular expression program for the Theory Of Computation course

//José Antonio Solís Martínez. 162442
//María Fernanda Flores Luna. 162064
//Mauricio Raul Tenorio Guzman. 162106
//Jorge André Tenorio Guzman. 162107
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char string[60];
    int ascii[60];
    int i;

    printf("Input your arithmetic expression: ");
    fgets(string, 60, stdin);

    for (i = 0; i < strlen(string); i++)
    {
        //Typecast each character into an integer. ASCII
        ascii[i] = (int)string[i];
        //Print the info of each character for debugging
        //printf("i = %d . ascii = %d . char = %c . \n",i,ascii[i], string[i]);
    } 

    i=0;
    if(ascii[i] > 32)
    {
        //q0
        if (ascii[i] == 97) //a
        {
            //q1
            i++; //Will cause the program to crash if index out of bounds. Do I care? If you still see this comment, I didn't care.
            if (ascii[i] == 98) //b
            {
                //q2
                i++;
                while (ascii[i] == 97) //a
                {
                    i++;
                }
                if (ascii[i] == 98) //b
                {
                    //q3
                    i++;
                    while (ascii[i] == 97) //a
                    {
                        i++;
                    }
                    if ((ascii[i] != 97) && (ascii[i]!=10)) //a
                    {
                        printf("\nString not accepted\n");
                        return -1;
                    }
                    else if (ascii[i] == 10) //End of line?
                    {
                        printf("\nString accepted\n");
                        return 0;
                    }
                    else
                    {
                        printf("\n\tplshelp\t\n");
                    }
                }
                else
                {
                    printf("\nString not accepted\n");
                    return -1;
                }
            }
            else
            {
                printf("\nString not accepted\n");
                return -1;
            }
            
        }
        else if (ascii[i] == 98) //b
        {
            //q4
            i++;
            while (ascii[i] == 97) //a
            {
                i++;
            }
            if (ascii[i] == 98) //b
            {
                //q5
                i++;
                while (ascii[i] == 97) //a
                {
                    i++;
                }
                if ((ascii[i] != 97) && (ascii[i]!=10)) //a
                {
                    printf("\nString not accepted\n");
                    return -1;
                }
                else if (ascii[i] == 10) //End of line?
                {
                    printf("\nString accepted\n");
                    return 0;
                }
                else
                {
                    printf("\n\tplshelp2\t\n");
                }
            }
            else
            {
                printf("\nString not accepted\n");
                return -1;
            }
        }
        else
        {
            printf("\nString not accepted\n");
            return -1;
        }
    }
    else
    {
        ;//Nothing 
    }
    return 0;
}
