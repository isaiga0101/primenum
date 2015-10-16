#include "main.h"

int StrConversion(char inStr[50])
{
    int str_length = 0;             // Length of string
    int convert_int;
    int multiplier;
    int loop = 0;                   // Holds the number of times the first while loop loops.

    // While loop keeps looping
    while (inStr[str_length] != 0 || inStr[str_length] == " ")
    {
        str_length ++;
    }

    printf("str_length = %d", str_length);

    while (str_length > 0)
    {
        // Algorithm for assigning value to multiplier variable
        multiplier = 1;
        for (int x = 1;x = str_length;x ++)
        {
            multiplier *= 10;
        }

        switch (str_length)
        {
        case '1' :
            convert_int += multiplier;
            break;
        case '2' :
            convert_int += multiplier * 2;
            break;
        case '3' :
            convert_int += multiplier * 3;
            break;
        case '4' :
            convert_int += multiplier * 4;
            break;
        case '5' :
            convert_int += multiplier * 5;
            break;
        case '6' :
            convert_int += multiplier * 6;
            break;
        case '7' :
            convert_int += multiplier * 7;
            break;
        case '8' :
            convert_int += multiplier * 8;
            break;
        case '9' :
            convert_int += multiplier * 9;
            break;
        case '0' :
            break;
        default :
            break;
        }
        str_length --;
    }

    return convert_int;

}
