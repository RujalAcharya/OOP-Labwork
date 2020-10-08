/*
 *WAP in C to input the name, roll, marks and address of n students entered 
 *by the user and display the entered details using the concept of structure.
*/

#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    float marks;
    char address[20];
};

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student std[n];
    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i+1);
        scanf("%s%d%f%s", std[i].name, &std[i].roll, &std[i].marks, std[i].address);
    }
    printf("\n\nShowing details of students\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", std[i].name);
        printf("Roll: %d\n", std[i].roll);
        printf("Marks: %.2f\n", std[i].marks);
        printf("Address: %s\n\n", std[i].address);
    }
}