#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Show_Movie_Details(){
    printf("I am inside show movie");
}

void register_newUser(){
    printf("I am inside show movie");
}

void book_ticket(){
    printf("I am inside show movie");
}

void make_payment(){
    printf("I am inside show movie");
}


int main(){
    int choice;

    while(1){
        printf("\n***----MOVIE TICKET BOOKING SYSTEM----***\n");
        printf("1. Current Movie Running in Threater and it's Details\n");
        printf("2. Registration\n");
        printf("3. Book ticket\n");
        printf("4. Make Payment\n");
        printf("5. Exit\n");
        printf("\nEnter your choice (1-5): \n");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                Show_Movie_Details();
                break;
            case 2:
                register_newUser();
                break;
            case 3:
                book_ticket();
                break;
            case 4:
                make_payment();
                break;
            case 5:
                printf("Thanks for Using Our Movie Ticket Booking system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}