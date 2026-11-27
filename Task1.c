#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
    int age;
    float fee;
}Patient;

int main()
{
    Patient patient;
    
    printf("Enter Patient Name: ");
    scanf("%49[^\n]", patient.name);

    printf("Enter [ID] [Age] [Consultation Fee]: ");
    scanf("%d %d %f", &patient.id, &patient.age, &patient.fee);

    printf("\n=====Patient Information=====\n");
    printf("ID: %d Name: %s\n", patient.id, patient.name);
    printf("Age: %d\n", patient.age);
    printf("Consultation Fee: Rs.%.2f", patient.fee);

    return 0;
}