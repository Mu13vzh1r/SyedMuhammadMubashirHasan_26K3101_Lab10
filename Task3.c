#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
    int units;
    float rate;
}Customer;

void calculateBill(Customer customer);

int main()
{
    Customer customer;

    printf("Enter Customer ID: ");
    scanf("%d", &customer.id);
    printf("Enter Customer Name: ");
    scanf(" %49[^\n]", customer.name);
    printf("Enter [Units Consumed] [Rate]: ");
    scanf("%d %f", &customer.units, &customer.rate);

    calculateBill(customer);

    return 0;
}

void calculateBill(Customer customer)
{
    float bill = customer.units * customer.rate;

    printf("\nBill for Customer %d %s: Rs.%.2f\n",
        customer.id, customer.name, bill);
        
}



