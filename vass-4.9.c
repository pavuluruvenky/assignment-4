#include <stdio.h>
#include <string.h>

// Define union student
union Student {
    char name[51];
    float gpa;
};

int main() {
    union Student student; // Declare union student variable

    // Prompt user to enter student's name
    printf("Enter student's name (up to 50 characters): ");
    fgets(student.name, 51, stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; // Remove trailing newline

    // Prompt user to enter student's GPA
    printf("Enter student's GPA: ");
    scanf("%f", &student.gpa);

    // Print student's name and GPA
    printf("Student's name: %s\n", student.name);
    printf("Student's GPA: %.2f\n", student.gpa);

    return 0;
}
