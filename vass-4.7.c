#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100 // Maximum number of students

// Define structure for student details
struct Student {
    int roll_no;
    char stud_name[50];
    int mark1;
    int mark2;
    int mark3;
    int total_marks;
    float avg_marks;
};

// Function prototypes
void getStudentDetails(struct Student students[], int n);
void calculateTotalAndAverage(struct Student students[], int n);
void sortStudentsByMarksDescending(struct Student students[], int n);
void displayStudentDetails(struct Student students[], int n);

int main() {
    struct Student students[MAX_STUDENTS]; // Declare an array of structures to store student details
    int n; // Variable to store number of students

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Get student details
    getStudentDetails(students, n);

    // Calculate total and average marks for each student
    calculateTotalAndAverage(students, n);

    // Sort students by marks in descending order
    sortStudentsByMarksDescending(students, n);

    // Display student details
    displayStudentDetails(students, n);

    return 0;
}

// Function to get student details from user
void getStudentDetails(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Student Name: ");
        scanf(" %[^\n]", students[i].stud_name);
        printf("Marks in Subject 1: ");
        scanf("%d", &students[i].mark1);
        printf("Marks in Subject 2: ");
        scanf("%d", &students[i].mark2);
        printf("Marks in Subject 3: ");
        scanf("%d", &students[i].mark3);
    }
}

// Function to calculate total and average marks for each student
void calculateTotalAndAverage(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        students[i].total_marks = students[i].mark1 + students[i].mark2 + students[i].mark3;
        students[i].avg_marks = (float)students[i].total_marks / 3;
    }
}

// Function to sort students by marks in descending order using bubble sort
void sortStudentsByMarksDescending(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].total_marks < students[j + 1].total_marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Function to display student details
void displayStudentDetails(struct Student students[], int n) {
    printf("\nStudent Details (Descending order of marks):\n");
    printf("------------------------------------------------------\n");
    printf("Roll No.\tStudent Name\tTotal Marks\tAverage Marks\n");
    printf("------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
