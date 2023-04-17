#include <stdio.h>

// Define structure for customer details
struct Customer {
    int accountNo;
    char name[50];
    float balance;
};

// Function to print customer details with balance < 100 Rs
void printCustomersWithLowBalance(struct Customer customers[], int numCustomers) {
    printf("Customers with balance < 100 Rs:\n");
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance < 100) {
            printf("Account No: %d, Name: %s\n", customers[i].accountNo, customers[i].name);
        }
    }
}

int main() {
    // Assume 3 customers in the bank
    const int numCustomers = 3;
    struct Customer customers[numCustomers]; // Declare an array of structures for customers

    // Accept customer details from the user
    printf("Enter customer details:\n");
    for (int i = 0; i < numCustomers; i++) {
        printf("Customer %d:\n", i + 1);
        printf("Account No: ");
        scanf("%d", &customers[i].accountNo);
        printf("Name: ");
        scanf(" %[^\n]", customers[i].name);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    // Call the function to print customers with balance < 100 Rs
    printCustomersWithLowBalance(customers, numCustomers);

    return 0;
}
