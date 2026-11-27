#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
    char phone[20];
}Owner;


typedef struct
{
    int regNumber;
    char model[50];
    int year;
    Owner owner;
}Vehicle;

int main()
{
    Vehicle v1;
    Vehicle *vehicle = &v1;

    printf("Enter Vehicle: [Registration Number] [Manufacturing Year]:\n");
    scanf("%d %d", &v1.regNumber, &v1.year);
    printf("Enter Vehicle Model: ");
    scanf(" %49[^\n]", v1.model);

    printf("Enter its owner's name: ");
    scanf(" %49[^\n]", v1.owner.name);
    printf("ID:\n");
    scanf("%d", &v1.owner.id);
    printf("Contact Number: ");
    scanf(" %19[0-9+ -]", v1.owner.phone);

    printf("\nVehicle Registration Number: %d\n", vehicle->regNumber);
    printf("Manufactured in: %d Model: %s\n", vehicle->year, vehicle->model);

    printf("\nOwner Name: %s\n", vehicle->owner.name);
    printf("ID: %d Contact Number: %s\n", vehicle->owner.id, vehicle->owner.phone);

    return 0;
}
