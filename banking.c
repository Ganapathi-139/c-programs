#include <stdio.h>
#include <stdbool.h>

float deposite1()
{
    float money;
    printf("How much amount do you want to deposite: ");
    scanf("%f", &money);
    if (money <= 0)
    {
        printf("entered amount can't be zero or negative!\n");
        return 0;
    }
    else if (money > 100000)
    {
        printf("you cannot deposite more than 100000\n");
        return 0;
    }
    else
    {
        printf("depositing....\n");
        printf("succesfully deposited %.2f\n", money);
        return money;
    }
}

float withdraw1(float balance)
{
    float money;
    printf("How much amount do you want to withdraw: ");
    scanf("%f", &money);
    if (money > balance)
    {
        printf("Insufficiant balance!\n");
        printf("your current balance is %.2f\n", balance);
        return 0;
    }
    else
    {
        printf("withdrawing....\n");
        printf("succesfully withdrew %.2f\n", money);
        return money;
    }
}

int main()
{
    float deposite;
    float withdraw;
    float balance = 1000.00;
    bool exit = true;
    int choice;

    printf("*****WELCOME*****\n");
    printf("1.deposite\n2.withdrew\n3.check balance\n4.exit\n");
    while (exit)
    {
        printf("Enter your choice(1-4): ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 4)
        {
            printf("invalid choice!\n");
            exit = false;
        }
        else
        {
            switch (choice)
            {
            case 1:
                deposite = deposite1();
                balance += deposite;
                break;
            case 2:
                withdraw = withdraw1(balance);
                balance -= withdraw;
                break;
            case 3:
                printf("your current balance = %.2f\n", balance);
                break;
            case 4:
                printf("exiting....\n");
                exit = false;
                break;
            }
        }
    }
    return 0;
}
