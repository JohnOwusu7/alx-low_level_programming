#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main() {
    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator
    const char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int alphabet_size = 62; // length of alphabet string
    int i;

    srand(time(NULL)); // seed the random number generator

    // generate random password
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = alphabet[rand() % alphabet_size];
    }
    password[PASSWORD_LENGTH] = '\0'; // null terminate the string

    printf("Random password for 101-crackme: %s\n", password);

    return 0;
}
