#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return s[maxIndex];
}

int main() {
    struct Student students[3];
    int i;

    printf("--- Enter Details for 3 Students ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    struct Student topStudent = getTopStudent(students, 3);

    printf("\n--- Top Student Details ---\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll No: %d\n", topStudent.roll_no);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}