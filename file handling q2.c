//file handling 
//program to tell the user to enter 100 characters 
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "data.txt"
#define MAX_LENGTH 100

// Function to write a sentence to the file
void writeToFile() {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    char sentence[4] ;
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, MAX_LENGTH, stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
}

// Function to read content from the file and display it
void readFromFile() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        perror("Error reading file");
        exit(1);
    }

    char ch;
    printf("Contents of '%s':\n", FILENAME);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

// Function to append a sentence to the file
void appendToFile() {
    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        exit(1);
    }

    char sentence[MAX_LENGTH];
    printf("Enter another sentence to append: ");
    fgets(sentence, MAX_LENGTH, stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
}

int main() {
    // Step 1: Write the first sentence
    writeToFile();

    // Step 2: Read and display the file contents
    readFromFile();

    // Step 3: Append a second sentence
    appendToFile();

    // Step 4: Read and display the updated file contents
    readFromFile();
    return 0;
    }

