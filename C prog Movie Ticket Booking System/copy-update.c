#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user {
    char name[50];
    char email[50];
    char password[50];
};

struct ticket {
    char movieName[50];
    int numTickets;
    char seats[50];
};

void displayMovies() {
    printf("\n\nCurrent Movies:\n");
    printf("1. Movie 1\n");
    printf("2. Movie 2\n");
    printf("3. Movie 3\n");
    printf("3. Movie 4\n");
    printf("3. Movie 5\n");
}

void registerUser() {
    struct user newUser;
    printf("Enter your name: ");
    scanf("%s", newUser.name);
    printf("Enter your email: ");
    scanf("%s", newUser.email);
    printf("\n Enter your password: ");
    scanf("%s", newUser.password);

    // store user information in a file or database
}

void bookTicket() {
    struct ticket newTicket;
    printf("Enter movie name: ");
    scanf("%s", newTicket.movieName);
    printf("\nEnter number of tickets: ");
    scanf("%d", &newTicket.numTickets);
    printf("\nEnter seats (comma separated): ");
    scanf("%s", newTicket.seats);

    // store ticket information in a file or database
}

void cancelTicket() {
    int ticketId;
    printf("Enter ticket ID: ");
    scanf("%d", &ticketId);

    // retrieve ticket information from the database
    // delete the ticket information from the database
}

void selectPayment() {
    int paymentOption;
    printf("Select payment option:\n");
    printf("1. Credit card\n");
    printf("2. Debit card\n");
    printf("3. Net banking\n");
    scanf("%d", &paymentOption);
    if(paymentOption==1 || paymentOption==2 || paymentOption==3)
    {
    	printf("payment method accepted");
	}
	else
	{
		printf("select a valid payment option");
	}
	// if-else used to check payment mode
    // store payment information in a file or database
}

int main() {
    int option;

    do {
        printf("\n\nMovie Ticket Booking System\n");
        printf("1. Display current movies\n");
        printf("2. Register\n");
        printf("3. Book ticket\n");
        printf("4. Cancel ticket\n");
        printf("5. Select payment\n");
        printf("6. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                displayMovies();
                break;
            case 2:
                registerUser();
                break;
            case 3:
                bookTicket();
                break;
            case 4:
                cancelTicket();
                break;
            case 5:
                selectPayment();
                break;
            case 6:
                printf("Thank you for using Movie Ticket Booking System.\n");
                exit(0);
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (1);

    return 0;
}