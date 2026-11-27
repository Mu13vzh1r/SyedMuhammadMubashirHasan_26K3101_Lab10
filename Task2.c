#include <stdio.h>

typedef struct
{
    int number;
    char type[50];
    int occupants;
    float rent;
}Room;

int main()
{
    Room room[5];
    float totalRent = 0;

    for (int i = 0; i<5; i++)
    {
        printf("Room Number: ");
        scanf("%d", &room[i].number);
        printf("Room Type: ");
        scanf(" %49[^\n]", room[i].type);
        printf("Number of Occupants: ");
        scanf("%d", &room[i].occupants);
        printf("Daily Rent: ");
        scanf("%f", &room[i].rent);
    }


    printf("\nRoom No. |    Type    | Occupants | Daily Rent (Rs.)\n");
    for (int i = 0; i<5; i++)
    {
        printf("%-9d|%-12s|%-11d|%-16.2f\n",
        room[i].number, room[i].type, room[i].occupants, room[i].rent);
        totalRent += room[i].rent;
    }
    printf("\nTotal Daily Rent: Rs.%.2f\n", totalRent);
    return 0;
}