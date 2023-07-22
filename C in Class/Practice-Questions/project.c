#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Movie_review(){
    printf("User1: Best movie ever.\nUser2: Recommend 100%.\nUser3: Must watch movie");
}

void Show_Movie_Details(){
    // printf("I am inside show movie");
    printf("\nMovies Running in the threaters are: \n");

    printf("In Hollywood\n 1. Persuit of Happiness\n\n");

    printf("In Indian Cinema\n 2. KGF: Chapter 3\n\n");

    printf("For Review of Movie no.1 : Press 1\n");
    printf("For Review of Movie no.2 : Press 2\n");
    int choose;
    scanf("%d", &choose);
    switch(choose){
        case 1: Movie_review();
                break;         
        case 2: Movie_review();
                break;
        default: printf("Invalid Input\n");
    }
    
}

void register_newUser(){
    printf("I am inside show movie");
}

void book_ticket(){
    printf("Enter the name of the Movie to Watch: ");
    char name[50];
    scanf("%s\n", name);

    printf("Enter the no. of seats for Booking: ");
    int n;
    scanf("%d\n", &n);

    printf("<<<Your seats has been booked...>>>\n");
    printf(" *****Thanks for Using Our Movie Ticket Booking system****** ");
}

void make_payment(){
    printf("I am inside show movie");
}


int main(){
    int choice;

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
    return 0;
}