#include <stdio.h>

int main(){

    int cardNum;
    float balance = 1000;
    
    printf("\n******************************************** \n");
    printf("       💸💸💸 Welcome to ABC ATM 💸💸💸        \n");
    printf("******************************************** \n");

    printf("Enter your card number: ");
    scanf("%d" , &cardNum);
    printf("******************************************** \n");

    printf("Account Number: ");
    printf("%d \n", cardNum);
    printf("\nEnter 0 to Check Balance \n");
    printf("Enter 1 to withdrawal from account \n");
    printf("Enter any number to exit \n \n");
    printf("******************************************** \n");

    int userInput;
    printf("User Input: ");
    scanf("%d",&userInput);
    printf("******************************************** \n");
    
    if(userInput == 1){

        float withdrawAmount, remainingBalance;;
        printf("\nAvailable balance: %.2f\n" , balance);
        printf("Enter Withdraw Amount: ");
        scanf("%f" , &withdrawAmount);

        printf("\n******************************************** \n");
        
        printf("\n$");
        printf("%.2f", withdrawAmount);
        printf(" successfully withdrawn \n");

        remainingBalance = (balance - withdrawAmount);

        printf("Remaining Balance: $");
        printf("%.2f \n" , remainingBalance);
        printf("\n******************************************** \n");

        printf("  😃😃😃 Thank you Have a Good Day! 😃😃😃  \n\n\n\n");
    
    }

    else if(userInput == 0){

        printf("\nAvailable balance: %.2f\n" , balance);
        printf("\n******************************************** \n");
        printf("  😃😃😃 Thank you Have a Good Day! 😃😃😃  \n\n\n\n");

    }

    else {
        printf("\nYou are successfully exited! \n");
        printf("\n******************************************** \n");
        printf("  😃😃😃 Thank you Have a Good Day! 😃😃😃  \n\n\n\n");
    }
}