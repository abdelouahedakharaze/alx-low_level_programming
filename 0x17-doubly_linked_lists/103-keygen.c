#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * findLargestChar - Finds the biggest character in the username
 * @username: the username
 * @length: length of the username
 *
 * Return: the biggest character's processed value
 */
int findLargestChar(char *username, int length) {
    int maxChar = *username;
    int index = 0;

    // Finding the largest character in the username
    while (index < length) {
        if (maxChar < username[index])
            maxChar = username[index];
        index += 1;
    }

    srand(maxChar ^ 14); // Seed random number generator
    return (rand() & 63); // Process the random number
}

/**
 * multiplyChars - Multiplies each character of the username
 * @username: the username
 * @length: length of the username
 *
 * Return: processed value from character multiplication
 */
int multiplyChars(char *username, int length) {
    int total = 0;
    int index = 0;

    // Multiplying each character of the username
    while (index < length) {
        total = total + username[index] * username[index];
        index += 1;
    }

    return (((unsigned int)total ^ 239) & 63); // Process the total value
}

/**
 * generateRandomChar - Generates a random character based on username
 * @username: the username
 *
 * Return: processed value of the random character
 */
int generateRandomChar(char *username) {
    int randChar = 0;
    int index = 0;

    // Generate a random character based on the username
    while (index < *username) {
        randChar = rand();
        index += 1;
    }

    return (((unsigned int)randChar ^ 229) & 63); // Process the random character value
}

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv) {
    char generatedKey[7];
    int length, sum, product, i;
    long hexValues[] = {
        0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
        0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
        0x723161513346655a, 0x6b756f494b646850
    };
    (void)argc;

    // Calculate the length of the input username
    for (length = 0; argv[1][length]; length++);

    generatedKey[0] = ((char *)hexValues)[(length ^ 59) & 63];

    sum = product = 0;
    for (i = 0; i < length; i++) {
        sum = sum + argv[1][i];
        product = argv[1][i] * product;
    }

    generatedKey[1] = ((char *)hexValues)[(sum ^ 79) & 63];
    generatedKey[2] = ((char *)hexValues)[(product ^ 85) & 63];
    generatedKey[3] = ((char *)hexValues)[findLargestChar(argv[1], length)];
    generatedKey[4] = ((char *)hexValues)[multiplyChars(argv[1], length)];
    generatedKey[5] = ((char *)hexValues)[generateRandomChar(argv[1)];
    generatedKey[6] = '\0';

    // Print the generated key
    for (i = 0; generatedKey[i]; i++) {
        printf("%c", generatedKey[i]);
    }
    return 0;
}
