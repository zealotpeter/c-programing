#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student student;
    FILE *file = fopen("C:\\Users\\Administrator\\Desktop\\program\\students.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int n;
    printf("Enter number of students to add: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", student.name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &student.marks);
        fprintf(file, "%s %d\n", student.name, student.marks);
    }

    fclose(file);
    printf("Data appended to students.txt\n");
    return 0;
}
