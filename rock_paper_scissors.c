#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int userchoice,systemchoice;
    bool playagain = true;
    char choice;

    srand(time(0));

    printf("***ROCK PAPER SCISSORS***\n");
    printf("1.ROCK\n2.PAPER\n3.SCISSORS\n");

    while (playagain)
    {
        printf("Enter your choice(1-3): ");
        scanf("%d", &userchoice);

        if (userchoice < 1 || userchoice > 3)
        {
            printf("Invalid choice try again\n");
            continue;
        }
        systemchoice = (rand() % 3) + 1;

        printf("you chose: ");
        switch (userchoice)
        {
        case 1:
            printf("ROCK");
            break;
        case 2:
            printf("PAPER");
            break;
        case 3:
            printf("SCISSORS");
            break;
        }
        printf("\nSystem chose: ");
        switch (systemchoice)
        {
        case 1:
            printf("ROCK");
            break;
        case 2:
            printf("PAPER");
            break;
        case 3:
            printf("SCISSORS");
            break;
        }

        if (userchoice == systemchoice)
        {
            printf("\nit's tie!");
        }
        else if ((userchoice == 1 && systemchoice == 3) ||
                 (userchoice == 2 && systemchoice == 1) ||
                 (userchoice == 3 && systemchoice == 2))
        {
            printf("\nyou won the game");
        }
        else
        {
            printf("\nyou lost the game");
        }
        printf("\nDo you want to play again (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y')
        {
            playagain = true;
        }
        else if (choice == 'n' || choice == 'N')
        {
            printf("Good bye!\n");
            playagain = false;
        }
        else
        {
            printf("ERROR\n");
            playagain = false;
        }
    }
    return 0;
}
