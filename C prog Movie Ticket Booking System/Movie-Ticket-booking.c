#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct movie {
    char name[50];
    char time[10];
    int seats;
    int price;
};

struct user {
    char name[50];
    char email[50];
    char phone[15];
    int booked_seats;
};

void display_movie(struct movie m) {
    printf("Movie Name: %s\n", m.name);
    printf("Show Time: %s\n", m.time);
    printf("Available Seats: %d\n", m.seats);
    printf("Ticket Price: %d\n", m.price);
}

void register_user(struct user *u) {
    printf("Enter your name: ");
    scanf("%s", u->name);
    printf("Enter your email: ");
    scanf("%s", u->email);
    printf("Enter your phone number: ");
    scanf("%s", u->phone);
    u->booked_seats = 0;
}

void book_ticket(struct movie *m, struct user *u) {
    int num_seats;
    printf("Enter the number of seats you want to book: ");
    scanf("%d", &num_seats);
    if(num_seats > m->seats) {
        printf("Sorry, only %d seats are available.\n", m->seats);
    } else {
        m->seats -= num_seats;
        m->price *= num_seats;
        u->booked_seats += num_seats;
        printf("Ticket(s) booked successfully!\n");
    }
}

void cancel_ticket(struct movie *m, struct user *u) {
    int num_seats;
    printf("Enter the number of seats you want to cancel: ");
    scanf("%d", &num_seats);
    if(num_seats > u->booked_seats) {
        printf("You have only booked %d seat(s).\n", u->booked_seats);
    } else {
        m->seats += num_seats;
        m->price /= num_seats;
        u->booked_seats -= num_seats;
        printf("Ticket(s) cancelled successfully!\n");
    }
}

void display_payment_options(struct user u, struct movie m) {
    printf("Movie Name: %s\n", m.name);
    printf("Booked Seats: %d\n", u.booked_seats);
    printf("Total Amount: %d\n", m.price);
    printf("Payment options:\n");
    printf("1. Credit Card\n");
    printf("2. Debit Card\n");
    printf("3. Net Banking\n");
}

int main() {
    struct movie m = {"The Avengers", "7:00 PM", 100, 150};
    struct user u;
    int choice;
    while(1) {
        printf("\nWelcome to the Movie Ticket Booking System\n");
        printf("1. Display current movie details\n");
        printf("2. Register\n");
        printf("3. Book a ticket\n");
        printf("4. Cancel a ticket\n");
        printf("5. Payment options\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                display_movie(m);
                break;
            case 2:
                register_user(&u);
                break;
            case 3:
                book_ticket(&m, &u);
                break;
            case 4:
                cancel_ticket(&m, &u);
        }
    }
}
