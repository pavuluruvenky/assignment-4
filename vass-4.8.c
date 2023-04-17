#include <stdio.h>

// Define union variable
union Data {
    int num;
    float decimal;
};

int main() {
    union Data data; // Declare union variable
    int choice; // Variable to store user's choice

    printf("Enter the type of value (1 for integer, 2 for float): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter an integer value: ");
        scanf("%d", &data.num);
        printf("You entered: %d\n", data.num);
    } else if (choice == 2) {
        printf("Enter a float value: ");
        scanf("%f", &data.decimal);
        printf("You entered: %.2f\n", data.decimal);
    } else {
        printf("Invalid choice. Please choose 1 for integer or 2 for float.\n");
    }

    return 0;
}
