//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    // Take input
    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Age: ");
    scanf("%d", &age);

    // Write to file
    fprintf(fp, "Name: %sAge: %d\n", name, age);

    // Close file
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
