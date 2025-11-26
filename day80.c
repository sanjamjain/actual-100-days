#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fptr;
    struct Student s;
    int n;

    // --- WRITE ---
    fptr = fopen("students.dat", "w");
    printf("How many students? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter Name, Roll, Marks for student %d: ", i + 1);
        scanf("%s %d %f", s.name, &s.roll, &s.marks);
        fprintf(fptr, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fptr);

    // --- READ ---
    printf("\n--- Student Records from File ---\n");
    fptr = fopen("students.dat", "r");
    
    while (fscanf(fptr, "%s %d %f", s.name, &s.roll, &s.marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
    }
    
    fclose(fptr);
    return 0;
}