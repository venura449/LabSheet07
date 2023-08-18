#include <stdio.h>
#include <assert.h>
#include <math.h>

// Function prototypes
float calMarks(int caMarks,int finalMarks);


int main() {
    int finalMarks;
    int caMarks;
    float totalMarks;

    // Assertion to check if the calculated total marks are very close to 100
    assert(fabs(calMarks(100,100)-100)<0.01);

    // Input from user
    printf("Enter marks for Final marks: ");
    scanf("%d", &finalMarks);
    printf("Enter the marks for CA marks: ");
    scanf("%d", &caMarks);

    // Calculate total marks
    totalMarks = calMarks(caMarks,finalMarks);
    
    // Display the calculated total marks
    printf("Your Final Mark is %.2f", totalMarks);

    return 0;
}

// Function to calculate CA marks contribution
float calMarks(int caMarks,int finalMarks) {
    
    return ((caMarks*0.4)+(finalMarks*0.6));
}


