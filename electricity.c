
#include <stdio.h>
#include <string.h>

// Union for payment details
union Payment
{
    char upi[30];
    char cheque[30];
};

// Structure for consumer details
struct Consumer
{
    int id;
    char name[50];

    int previousReading;
    int currentReading;
    int units;

    float billAmount;

    int paymentType;
    union Payment payment;
};

// Function declarations
float calculateBill(int units);
int checkID(int id);
void addConsumer();
void displayConsumers();
void searchConsumer();
void displayBill(struct Consumer c);

// Calculate electricity bill
float calculateBill(int units)
{
    float amount = 0;

    if (units <= 100)
    {
        amount = units * 1.50;
    }
    else if (units <= 200)
    {
        amount = (100 * 1.50) +
                 (units - 100) * 2.50;
    }
    else if (units <= 300)
    {
        amount = (100 * 1.50) +
                 (100 * 2.50) +
                 (units - 200) * 3.50;
    }
    else
    {
        amount = (100 * 1.50) +
                 (100 * 2.50) +
                 (100 * 3.50) +
                 (units - 300) * 5.00;
    }

    return amount;
}

// Check duplicate consumer ID
int checkID(int id)
{
    FILE *fp;
    struct Consumer c;

    fp = fopen("consumer.dat", "rb");

    if (fp == NULL)
        return 0;

    while (fread(&c, sizeof(c), 1, fp) == 1)
    {
        if (c.id == id)
        {
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);
    return 0;
}

// Add new consumer
void addConsumer()
{
    FILE *fp;
    struct Consumer c;

    printf("\n========== ADD CONSUMER ==========\n");

    printf("Enter Consumer ID: ");
    scanf("%d", &c.id);

    if (c.id <= 0)
    {
        printf("Invalid Consumer ID!\n");
        return;
    }

    if (checkID(c.id))
    {
        printf("Consumer ID already exists!\n");
        return;
    }

    printf("Enter Consumer Name: ");
    scanf(" %49[^\n]", c.name);

    printf("Enter Previous Meter Reading: ");
    scanf("%d", &c.previousReading);

    printf("Enter Current Meter Reading: ");
    scanf("%d", &c.currentReading);

    if (c.previousReading < 0 ||
        c.currentReading < c.previousReading)
    {
        printf("Invalid meter readings!\n");
        return;
    }

    c.units = c.currentReading - c.previousReading;

    c.billAmount = calculateBill(c.units);

    printf("\nSelect Payment Information:\n");
    printf("1. UPI\n");
    printf("2. Cheque\n");
    printf("Enter choice: ");
    scanf("%d", &c.paymentType);

    if (c.paymentType == 1)
    {
        printf("Enter UPI ID: ");
        scanf(" %29s", c.payment.upi);
    }
    else if (c.paymentType == 2)
    {
        printf("Enter Cheque Number: ");
        scanf(" %29s", c.payment.cheque);
    }
    else
    {
        printf("Invalid payment choice!\n");
        return;
    }

    fp = fopen("consumer.dat", "ab");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    fwrite(&c, sizeof(c), 1, fp);

    fclose(fp);

    printf("\nConsumer added successfully!\n");

    displayBill(c);
}

// Display individual bill
void displayBill(struct Consumer c)
{
    printf("\n====================================\n");
    printf("          ELECTRICITY BILL\n");
    printf("====================================\n");

    printf("Consumer ID      : %d\n", c.id);
    printf("Consumer Name    : %s\n", c.name);

    printf("Previous Reading : %d\n", c.previousReading);
    printf("Current Reading  : %d\n", c.currentReading);

    printf("Units Consumed   : %d\n", c.units);

    printf("------------------------------------\n");

    printf("Total Bill       : Rs. %.2f\n",
           c.billAmount);

    printf("Payment Details  : ");

    if (c.paymentType == 1)
    {
        printf("UPI - %s\n", c.payment.upi);
    }
    else
    {
        printf("Cheque - %s\n", c.payment.cheque);
    }

    printf("====================================\n");
}

// Display all consumers
void displayConsumers()
{
    FILE *fp;
    struct Consumer c;
    int count = 0;

    fp = fopen("consumer.dat", "rb");

    if (fp == NULL)
    {
        printf("\nNo consumer records found!\n");
        return;
    }

    printf("\n========== ALL CONSUMERS ==========\n");

    while (fread(&c, sizeof(c), 1, fp) == 1)
    {
        displayBill(c);
        count++;
    }

    if (count == 0)
    {
        printf("No records available!\n");
    }

    fclose(fp);
}

// Search consumer by ID
void searchConsumer()
{
    FILE *fp;
    struct Consumer c;

    int id;
    int found = 0;

    printf("\nEnter Consumer ID: ");
    scanf("%d", &id);

    fp = fopen("consumer.dat", "rb");

    if (fp == NULL)
    {
        printf("No consumer records found!\n");
        return;
    }

    while (fread(&c, sizeof(c), 1, fp) == 1)
    {
        if (c.id == id)
        {
            displayBill(c);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nConsumer not found!\n");
    }

    fclose(fp);
}

// Main function
int main()
{
    int choice;

    do
    {
        printf("\n");
        printf("====================================\n");
        printf("  ELECTRICITY BILLING MANAGEMENT\n");
        printf("====================================\n");

        printf("1. Add New Consumer\n");
        printf("2. Display All Consumers\n");
        printf("3. Search Consumer\n");
        printf("4. Exit\n");

        printf("------------------------------------\n");
        printf("Enter Your Choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addConsumer();
                break;

            case 2:
                displayConsumers();
                break;

            case 3:
                searchConsumer();
                break;

            case 4:
                printf("\nThank you for using our system!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}

