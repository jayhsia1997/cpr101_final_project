// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

void tokenizing()
{
    /* Version 1 */
    tokenizingV1();

    /* Version 2 */
    tokenizingV2();

    /* Version 3 */
    tokenizingV3();
}

/* Version 1 */
void tokenizingV1()
{
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
void tokenizingV2()
{
    printf("*** Start of Tokenizing Phrases Demo ***\n");
    char phrases[BUFFER_SIZE]; // define the buffer size of the string and name it phrases
    char* nextPhrase = NULL; // define a pointer to a string and name it nextPhrase
    int phrasesCounter; // define a counter for the number of phrases
    do {
        printf("Type a few phrases separated by comma(q - to quit) :\n"); // prompt the user to enter a string
        fgets(phrases, BUFFER_SIZE, stdin); // read a string from the user
        phrases[strlen(phrases) - 1] = '\0'; // remove the newline character from the string
        if ((strcmp(phrases, "q") != 0)) { // check if the user entered "q"
            nextPhrase = strtok(phrases, ","); // tokenize the string using comma as the delimiter
            phrasesCounter = 1; // initialize the counter to 1
            while (nextPhrase) { // loop until there are no more tokens
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase); // print the token and its number
                nextPhrase = strtok(NULL, ","); // get the next token
            }
        }
    } while (strcmp(phrases, "q") != 0); // repeat the loop until the user enters "q"
    printf("*** End of Tokenizing Phrases Demo ***\n\n");
}

/* Version 3 */
void tokenizingV3()
{
    printf("*** Start of Tokenizing Sentences Demo ***\n");
    char sentences[BUFFER_SIZE]; // define the buffer size of the string and name it sentences
    char* nextSentence = NULL; // define a pointer to a string and name it nextSentence
    int sentencesCounter; // define a counter for the number of sentences
    do {
        printf("Type a few sentences separated by dot(q - to quit):\n"); // prompt the user to enter a string
        fgets(sentences, BUFFER_SIZE, stdin); // read a string from the user
        sentences[strlen(sentences) - 1] = '\0'; // remove the newline character from the string
        if ((strcmp(sentences, "q") != 0)) { // check if the user entered "q"
            nextSentence = strtok(sentences, "."); // tokenize the string using dot as the delimiter
            sentencesCounter = 1; // initialize the counter to 1
            while (nextSentence) { // loop until there are no more tokens
                printf("Senetnce #%d is \'%s\'\n", sentencesCounter++, nextSentence); // print the token and its number
                nextSentence = strtok(NULL, "."); // get the next token
            }
        }
    } while (strcmp(sentences, "q") != 0); // repeat the loop until the user enters "q"
    printf("*** End of Tokenizing Sentences Demo ***\n\n");
}
