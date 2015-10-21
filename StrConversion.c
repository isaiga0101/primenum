#include "main.h"

int StrConversion(char inStr[50])
{
    int str_length = 0;             // Length of string
    int convert_int = 0;
    int multiplier;
    int loop = 0;                   // Holds the number of times the main while() loop loops.

    // While loop keeps looping
    while (inStr[str_length] != 0 || inStr[str_length] == " ")
    {
        str_length ++;
    }
    str_length --;

    printf("str_length = %d\n", str_length);
    // Main loop
    while (loop <= str_length)
    {
        printf("Inside StrConversion() main loop\n");
        // Algorithm for assigning value to multiplier variable
        multiplier = 1;
        for (int x = 0;x == loop;x ++)
        {
            printf("x = %d\n",x);
            multiplier *= 10;
        }
        printf("Multiplier = %d\n",multiplier);
        switch (inStr[str_length-1])
        {
        case '1' :
            convert_int += multiplier;
            printf("Added %d\n", convert_int);
            break;
        case '2' :
            convert_int += multiplier * 2;
            printf("Added %d\n", convert_int);
            break;
        case '3' :
            convert_int += multiplier * 3;
            printf("Added %d\n", convert_int);
            break;
        case '4' :
            convert_int += multiplier * 4;
            printf("Added %d\n", convert_int);
            break;
        case '5' :
            convert_int += multiplier * 5;
            printf("Added %d\n", convert_int);
            break;
        case '6' :
            convert_int += multiplier * 6;
            printf("Added %d\n", convert_int);
            break;
        case '7' :
            convert_int += multiplier * 7;
            printf("Added %d\n", convert_int);
            break;
        case '8' :
            convert_int += multiplier * 8;
            printf("Added %d\n", convert_int);
            break;
        case '9' :
            convert_int += multiplier * 9;
            printf("Added %d\n", convert_int);
            break;
        case '0' :
            printf("Added 0\n");
            break;
        default :
            printf("Fatal error in converting back string to integer.\nProcess aborted.");
            str_length = 0;
            break;
        }
        loop ++;
    }

    return convert_int;

}
