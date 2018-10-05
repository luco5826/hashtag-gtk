#include "hashtagUtils.h"

/**
 * 
 * See headers for this functions' explanation
 * 
 */


boolean isLowerCase(char ch)
{
    return (ch >= 'a' && ch <= 'z');
}

boolean isUpperCase(char ch)
{
    return (ch >= 'A' && ch <= 'Z');
}

boolean isNumber(char ch)
{
    return (ch >= '0' && ch <= '9');
}

char capitalize(char ch)
{
    return ch - 32;
}

void removePunctuation(char *string, int stringLength)
{
    int i = 0;
    while (i < stringLength)
    {
        if (!isLowerCase(string[i]) && !isUpperCase(string[i]) && !isNumber(string[i]))
        {
            string[i] = ' ';
        }
        i++;
    }
}

void toFile(char *data)
{
    FILE *output = NULL;
    if ((output = fopen("result.txt", "w")) == NULL)
    {
        perror("Error while writing the result on file\n");
        exit(-1);
    }
    else
    {
        fprintf(output, data);
        fprintf(output, "\n");
        fclose(output);
    }
}

void printToTerminal(char* phrase, char* result){

        printf("%s", "ORIGINAL:\n");
        printf("%s\n\n", phrase);
        printf("%s", "HASHTAG:\n");
        printf("%s\n\n", result);
}