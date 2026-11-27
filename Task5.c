#include <stdio.h>

typedef struct
{
    char id[10];
    char name[50];
    int stdsEnrolled;
    
    struct Head{
        int id;
        char name[50];
        char designation[30];
    }head;

}Department;

int main()
{
    Department dep;

    printf("Enter Department\n");
    printf("Name: ");
    scanf(" %49[^\n]", dep.name);
    printf("ID: ");
    scanf(" %9[^\n]", dep.id);
    printf("Number of Students Enrolled: ");
    scanf("%d", &dep.stdsEnrolled);

    printf("Enter Department Head's\n");
    printf("Name: ");
    scanf(" %49[^\n]", dep.head.name);
    printf("Employee ID: ");
    scanf("%d", &dep.head.id);
    printf("Designation: ");
    scanf(" %29[^\n]", dep.head.designation);

    printf("\nDEPARTMENT INFORMATION\n");
    printf("%s %s\n", dep.id, dep.name);
    printf("Students Enrolled: %d\n", dep.stdsEnrolled);
    printf("Department Head:\n%d %s %s\n",
         dep.head.id, dep.head.designation, dep.head.name);

    return 0;
}