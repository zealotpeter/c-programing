#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char sentence[101];

    // Open the file for reading
    fptr = fopen("C:\\Users\\Administrator\\Desktop\\program\\data.txt", "a");
    if (fptr == NULL) {
        printf( "Error opening file for reading.\n");
        exit(1);
	}
        
        printf("Enter sentence:");
        scanf("%s\n",&sentence);
        
        fprintf(fptr,"%s", sentence);
    fclose(fptr);
    
    return 0;
}
