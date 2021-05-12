#include <stdio.h>
#include <stdlib.h>

int encrypt(char message[100000]);
int decrypt(char message[100000]);
int write(char message[100000]);

int main()
{
    char message[100000];
    FILE *file;

    file = fopen("test.txt", "r");

    while (fgets(message, 100000, file) != NULL)
    {
        printf("%s", message);
    }

    encrypt(message);
    // decrypt(message);

    fclose(file);

    return 0;
}

int encrypt(char message[100000])
{
    char c;
    int i, key;

    printf("Enter key: ");
    scanf("%d", &key);

    for (i = 0; message[i] != '\0'; ++i)
    {
        c = message[i];

        if (c >= 'a' && c <= 'z')
        {
            c = c + key;

            if (c > 'z')
            {
                c = c - 'z' + 'a' - 1;
            }

            message[i] = c;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = c + key;

            if (c > 'Z')
            {
                c = c - 'Z' + 'A' - 1;
            }

            message[i] = c;
        }
    }

    printf("Encrypting and writing this text...\n");
    write(message);
    printf("Encryption and writing are Successful!\n");

    printf("Encrypted message: %s\n", message);

    return 0;
}

int write(char message[100000])
{
    FILE *file;

    file = fopen("final.txt", "w");

    if (file == NULL)
    {
        printf("Error!");
        exit(1);
    }

    fprintf(file, "%s", message);

    fclose(file);

    return 0;
}

int decrypt(char message[100000])
{
    char c;
    int i, key;

    printf("Enter key: ");
    scanf("%d", &key);

    for (i = 0; message[i] != '\0'; ++i)
    {
        c = message[i];

        if (c >= 'a' && c <= 'z')
        {
            c = c - key;

            if (c < 'a')
            {
                c = c + 'z' - 'a' + 1;
            }

            message[i] = c;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = c - key;

            if (c < 'A')
            {
                c = c + 'Z' - 'A' + 1;
            }

            message[i] = c;
        }
    }

    printf("Decrypted message: %s\n", message);

    return 0;
}

