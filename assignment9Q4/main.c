#include <stdio.h>

int convertCharToInt(char letter);
int contains0or1(int *ptrToLastDigits);
int comparingNumbers(int *ptrToLastDigits, int *ptrToLetterToNumber);

int main() {
    FILE *fp;
    int i, j;
    int phoneNumber, lastDigits[4], numbersForWord[4];
    char word[5];
    char *fileName = "/Users/Ludovic Provost/Desktop/EnglishWords4Letters.txt";
    fp = fopen(fileName, "r");
    printf("Enter a phone number:\n");
    scanf("%d", &phoneNumber);
    for (i = 0; i < 4; i++) {
        lastDigits[3 - i] = phoneNumber % 10;
        phoneNumber = phoneNumber / 10;
    }
    if (contains0or1(lastDigits)) {
        printf("Translation failed");
    }
    while (!feof(fp)) {
        fscanf(fp, "%s", word);
        for (j = 0; j < 4; j++) {
            numbersForWord[j] = convertCharToInt(word[j]);
        }
        if (!comparingNumbers(lastDigits, numbersForWord)) {
            printf("%d%s\t", phoneNumber, word);
        }
    }
    fclose(fp);
    return 0;
}

int comparingNumbers(int *ptrToLastDigits, int *ptrToLetterToNumber) {
    int i, boolValue = 0;
    for (i = 0; i < 4; i++) {
        if (ptrToLetterToNumber[i] != ptrToLastDigits[i]) {
            boolValue = 1;
        }
    }
    return boolValue;
}

int convertCharToInt(char letter) {
    int intValue = 0;
    if (letter == 'a' || letter == 'b' || letter == 'c') {
        intValue = 2;
    }
    else if (letter == 'd' || letter == 'e' || letter == 'f') {
        intValue = 3;
    }
    else if (letter == 'g' || letter == 'h' || letter == 'i') {
        intValue = 4;
    }
    else if (letter == 'j' || letter == 'k' || letter == 'l') {
        intValue = 5;
    }
    else if (letter == 'm' || letter == 'n' || letter == 'o') {
        intValue = 6;
    }
    else if (letter == 'p' || letter == 'q' || letter == 'r' || letter == 's') {
        intValue = 7;
    }
    else if (letter == 't' || letter == 'u' || letter == 'v') {
        intValue = 8;
    }
    else if (letter == 'w' || letter == 'x' || letter == 'y' || letter == 'z') {
        intValue = 9;
    }
    return intValue;
}
int contains0or1(int *ptrToLastDigits) {
    int i, bool = 0;
    for (i = 0; i < 4; i++) {
        if (ptrToLastDigits[i] == 0 || ptrToLastDigits[i] == 1) {
            bool = 1;
        }
    }
    return bool;
}