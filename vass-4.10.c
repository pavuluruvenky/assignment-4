#include <stdio.h>

// Define union shape
union Shape {
    float radius; // for circle
    struct {
        float length; // for rectangle
        float width;
    } rectangle;
};

int main() {
    union Shape shape; // Declare union shape variable
    char choice; // To store user's choice

    // Prompt user to enter shape type
    printf("Enter shape type (C for circle, R for rectangle): ");
    scanf(" %c", &choice);

    // Process based on user's choice
    if (choice == 'C' || choice == 'c') {
        // Prompt user to enter circle's radius
        printf("Enter circle's radius: ");
        scanf("%f", &shape.radius);

        // Calculate and print circle's area
        float area = 3.14 * shape.radius * shape.radius;
        printf("Area of circle: %.2f\n", area);
    } else if (choice == 'R' || choice == 'r') {
        // Prompt user to enter rectangle's length and width
        printf("Enter rectangle's length: ");
        scanf("%f", &shape.rectangle.length);
        printf("Enter rectangle's width: ");
        scanf("%f", &shape.rectangle.width);

        // Calculate and print rectangle's area
        float area = shape.rectangle.length * shape.rectangle.width;
        printf("Area of rectangle: %.2f\n", area);
    } else {
        printf("Invalid choice. Please try again.\n");
    }

    return 0;
}
