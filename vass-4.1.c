#include <stdio.h>

// Define structure for employee details
struct Employee {
    int empID;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp; // Declare a variable of Employee structure type

    // Accept employee details from user
    printf("Enter Employee ID: ");
    scanf("%d", &emp.empID);

    printf("Enter Name: ");
    scanf(" %[^\n]", emp.name); // Use space before %[^\n] to ignore leading whitespaces and accept whole line

    printf("Enter Designation: ");
    scanf(" %[^\n]", emp.designation);

    printf("Enter Department: ");
    scanf(" %[^\n]", emp.department);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("Employee ID: %d\n", emp.empID);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
