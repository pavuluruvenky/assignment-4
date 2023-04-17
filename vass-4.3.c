#include <stdio.h>
#include <time.h>

// Define structure for student information
struct Student {
    char name[50];
    int rollNumber;
    int birthYear;
    int birthMonth;
    int birthDay;
    int admissionYear;
    int admissionMonth;
    int admissionDay;
};

int main() {
    struct Student student; // Declare a structure variable for student

    // Accept student information from the user
    printf("Enter student information:\n");
    printf("Name: ");
    scanf(" %[^\n]", student.name);
    printf("Roll Number: ");
    scanf("%d", &student.rollNumber);
    printf("Birthday (yyyy-mm-dd): ");
    scanf("%d-%d-%d", &student.birthYear, &student.birthMonth, &student.birthDay);
    printf("Admission Date (yyyy-mm-dd): ");
    scanf("%d-%d-%d", &student.admissionYear, &student.admissionMonth, &student.admissionDay);

    // Calculate age at the time of admission
    time_t t = time(NULL);
    struct tm current_time = *localtime(&t);

    int ageYears = current_time.tm_year + 1900 - student.birthYear;
    int ageMonths = current_time.tm_mon + 1 - student.birthMonth;
    int ageDays = current_time.tm_mday - student.birthDay;

    if (ageMonths < 0 || (ageMonths == 0 && ageDays < 0)) {
        ageYears--;
    }

    // Display student information and age at the time of admission
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Birthday: %d-%d-%d\n", student.birthYear, student.birthMonth, student.birthDay);
    printf("Admission Date: %d-%d-%d\n", student.admissionYear, student.admissionMonth, student.admissionDay);
    printf("Age at the time of admission: %d years\n", ageYears);

    return 0;
}
