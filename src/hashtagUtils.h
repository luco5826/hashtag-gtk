#ifndef HASHTAG_UTILS_H
#define HASHTAG_UTILS_H

#include <stdio.h>
#include <stdlib.h>

typedef int boolean;

/**
 * True if char is between 'a' and 'z', false otherwise
 */
boolean isLowerCase(char ch);

/**
 * True if char is between 'A' and 'Z', false otherwise
 */
boolean isUpperCase(char ch);

/**
 * True if char is between 0 and 9, false otherwise
 */
boolean isNumber(char ch);

/**
 * Return the same char capitalized
 */
char capitalize(char ch);

/**
 * Replace everything different from a-z, A-Z, 0-9 with spaces
 */
void removePunctuation(char *string, int stringLength);

/**
 * Writes output to text file named "result.txt"
 */
void toFile(char *data);

/**
 * Print the result to terminal
 */
void printToTerminal(char *phrase, char *result);

#endif //HASHTAG_UTILS_H