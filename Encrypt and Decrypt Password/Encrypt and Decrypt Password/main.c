#include <stdio.h>
#include <string.h>

void encrypt(char password[], int key) {
    for (int i = 0; i < strlen(password); i++) {
        password[i] = password[i] + key;
    }
}

void decrypt(char password[], int key) {
    for (int i = 0; i < strlen(password); i++) {
        password[i] = password[i] - key;
    }
}

int main() {
    char password[20];
    int key = 5;

    printf("Enter the Password (up to 19 characters): ");
    scanf("%19s", password);

    encrypt(password, key);
    printf("\nEncrypted Password: %s", password);

    decrypt(password, key);
    printf("\nDecrypted Password: %s\n", password);

    return 0;
}
