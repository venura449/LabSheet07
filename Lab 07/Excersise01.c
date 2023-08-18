#include <stdio.h>
#include <assert.h>

// Function prototype for checking the grade based on marks
char cheackmark(int marks);

// Function prototype for testing the checkmark function
void teststep();

int main() {
    int marks;

    // Run test cases to check if the function works correctly
    teststep();

    // Input from the user
    printf("Enter Your mark : ");
    scanf("%d", &marks);

    // Display the grade based on the input marks
    printf("Your grade is %c ", cheackmark(marks));

    return 0;
}

// Function to determine the grade based on marks
char cheackmark(int marks) {
    if (marks >= 75) {
        return 'A';
    } else if (marks >= 65) {
        return 'B';
    } else if (marks >= 55) {
        return 'C';
    } else if (marks >= 35) {
        return 'S';
    } else {
        return 'F';
    }
}

// Function to test the checkmark function with assert statements
void teststep() {
    assert(cheackmark(85) == 'A');
    assert(cheackmark(25) == 'F');
    // Add more test cases here if needed
}
