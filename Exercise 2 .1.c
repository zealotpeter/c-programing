#include <stdio.h>
#include <stdlib.h>

void write_sentence_to_file() {
    char sentence[101]; // 100 characters + 1 for the null terminator
    FILE *file;

    // Prompt the user for a sentence
    printf("Please enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);


    // Open the file for writing
    file = fopen("data.txt", "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing.\n");
        return;
    }

    // Write the sentence to 'data.txt'
    fputs(sentence, file);
    
    // Close the file
    fclose(file);
    
    printf("Sentence written to data.txt\n");
}

int main() {
    write_sentence_to_file();
    return 0;
}
