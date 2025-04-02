// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

void tokenizing() {
    /* Version 1 */
    tokenizingV1();

    /* Version 2 */


    /* Version 3 */
}

/* Version 1 */
void tokenizingV1() {
    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[BUFFER_SIZE]; // define the buffer size of the string and name it words
    char* nextWord = NULL; // define a pointer to a string and name it nextWord
    int wordsCounter; // define a counter for the number of words
    do {
        printf("Type a few words separated by space (q - to quit) :\n"); // prompt the user to enter a string
        fgets(words, BUFFER_SIZE, stdin); // read a string from the user
        words[strlen(words) - 1] = '\0'; // remove the newline character from the string
        if (strcmp(words, "q") != 0) { // check if the user entered "q"
            nextWord = strtok(words, " "); // tokenize the string using space as the delimiter
            wordsCounter = 1; // initialize the counter to 1
            while (nextWord) { // loop until there are no more tokens
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); // print the token and its number
                nextWord = strtok(NULL, " "); // get the next token
            }
        }
    } while (strcmp(words, "q") != 0); // repeat the loop until the user enters "q"
    printf("*** End of Tokenizing words Demo ***\n\n");
}

/* Version 2 */
void tokenizingV2() {}

/* Version 3 */
void tokenizingV3() {}
