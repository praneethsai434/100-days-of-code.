//Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to print student details
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Call function to print details
    printf("\nStudent Details:\n");
    printStudent(s1);

    return 0;
