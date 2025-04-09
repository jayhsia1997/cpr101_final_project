#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include <limits.h>
#include "converting.h"

    void converting() {
        /* Version 1 */
        convertingV1();
        /* Version 2 */
        convertingV2();
        /* Version 3 */
        convertingV3();
    }
    
    /* Version 1 */
    void convertingV1() {
    printf("*** Start of Converting Strings to int Demo ***\n");
    char intString[BUFFER_SIZE];
    int intNumber;
    //This loop will continue until user types 'q' to quit
    do {
        printf("Type an int numeric string (q - to quit):\n");
        //This function reads the given number of characters from user input (For this case, the size is limited to 80)
        fgets(intString, BUFFER_SIZE, stdin); 
        //strlen is used to calculate the length of the given string or char array excluding the NULL character
        //This line sets where is an end of string
        intString[strlen(intString) - 1] = '\0'; 
        //strcmp is used to compare two strings. It returns an integer value: If strcmp returns 0, it means the two strings are qual
        if (strcmp(intString, "q") != 0) {
            //atoi stands for ASCII To Integer. It converts the numbers in string form to their integer value
            intNumber = atoi(intString);
            printf("Converted number is %d\n", intNumber);
            }
        } 
    while (strcmp(intString, "q") != 0);
    printf("*** End of Converting Strings to int Demo ***\n\n");
}
    /* Version 2 */
    void convertingV2() {
    printf("*** Start of Converting Strings to double Demo ***\n");
    char doubleString[BUFFER_SIZE];
    double doubleNumber;
    //This loop will continue until user types 'q' to quit
    do {
        printf("Type the double numeric string (q - to quit):\n");
        //This function reads the given number of characters from user input
        fgets(doubleString, BUFFER_SIZE, stdin);
        //This line sets where is an end of string
        doubleString[strlen(doubleString) - 1] = '\0';
        //If user doesn't type q, then display the converted number. In this case, the string is converted into double value(atof).
        if ((strcmp(doubleString, "q") != 0)) {
            doubleNumber = atof(doubleString);
            printf("Converted number is %f\n", doubleNumber);
        }
    } while (strcmp(doubleString, "q") != 0);
    printf("*** End of Converting Strings to double Demo ***\n\n");
}

    /* Version 3 */
    void convertingV3() {
    printf("*** Start of Converting Strings to long Demo ***\n");
    char longString[BUFFER_SIZE];
    long longNumber;
    // This loop will continue until user types 'q' to quit
    do {
        printf("Type the long numeric string (q - to quit): \n");
        //This function reads the given number of characters from user input
        fgets(longString, BUFFER_SIZE, stdin); 
        //This line sets where is an end of string
        longString[strlen(longString) - 1] = '\0';
        //If user doesn't type q, then display the converted number. In this case, the string is converted into long integer value(atol).
        if ((strcmp(longString, "q") != 0)) {
            longNumber = atol(longString);
            printf("Converted number is %ld\n", longNumber);
        }
    } while (strcmp(longString, "q")  != 0);
    printf("*** End of Converting Strings to long Demo ***\n\n");
}

