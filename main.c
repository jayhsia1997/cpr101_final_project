#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"
#include <stdio.h>

int main(void)
{
    char buff[10]; // Buffer to store user input. Input is limited to 9 characters.
    do // This loop will be continued until user input '0' to quit
    {
        printf("1 - Fundamentals\n");
        printf("2 - Manipulating\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        printf("Which module to run? \n");
        fgets(buff, 10, stdin); // Read user input
        switch (buff[0]) // Check the first character of the input
        {
            case '1': fundamentals(); // If user input is '1', call the fundamentals function
                break; // It allows the program to exit the switch statement.
            case '2': manipulating(); // If user input is '2', call the manipulating function
                break;
            case '3': converting(); // If user input is '3', call the converting function
                break;
            case '4': tokenizing(); // If user input is '4', call the tokneizing function
                break;
        }
    } while (buff[0] != '0');
    return 0;
}