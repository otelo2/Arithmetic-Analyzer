//Regular expression program for the Theory Of Computation course

//José Antonio Solís Martínez. 162442
//María Fernanda Flores Luna. 162064
//Mauricio Raul Tenorio Guzman. 162106
//Jorge André Tenorio Guzman. 162107
#include <regex.h>
#include <stdio.h>

void give_result(int value)
{
    //Found
    if (value == 0)
    {
        printf("\nPattern found.\n");
    }
    //Not found
    else if (value == REG_NOMATCH)
    {
        printf("\nPattern not found. \n");
    }
    //Error in pattern matching
    else
    {
        printf("\nAn error occured.\m")
    }
    
    
}

int main()
{


    return 0
}
