#include<stdio.h>

// void Show_Movie_Details(){
//     printf("I am inside show movie");
// }
void select_theatre(){
    printf("I am inside show movie");
}
int main(){
    // int choice;

    // While(1){
    //     printf("\n***----MOVIE TICKET BOOKING SYSTEM----***\n");
    //     printf("1. Current Movie Running in Threater and it's Details\n");
    //     printf("2. Registration\n");
    //     printf("3. Book ticket\n");
    //     printf("4. Make Payment\n");
    //     printf("5. Exit\n");
    //     printf("\nEnter your choice (1-5): \n");
    //     scanf("%d", &choice);

    //     switch (choice){
    //         case 1:
    //             Show_Movie_Details();
    //             break;
    //         case 2:
    //             register_newUser();
    //             break;
    //         case 3:
    //             book_ticket();
    //             break;
    //         case 4:
    //             make_payment();
    //             break;
    //         case 5:
    //             printf("Thanks for Using Our Movie Ticket Booking system. Goodbye!\n");
    //             exit(0);
    //         default:
    //             printf("Invalid choice. Please try again.\n");

    //     }
    // }

     int choice;

  while (1) {
    printf("\n==== Movie Ticket Booking System ====\n");
    printf("1. Registration\n");
    printf("2. Select theatre\n");
    printf("3. Display Current Movie\n");
    printf("4. Select movie\n");
    printf("5. Select seats\n");
    printf("6. Select Refreshment\n");
    printf("7. Confirm booking\n");
    printf("8. Payment Options\n");
    printf("9. Exit\n");
    printf("Enter your choice (1-9): ");
    scanf("%d", &choice);
    // getchar(); 

    switch (choice) {
      case 1:
        registerUser();
        break;
      case 2:
        select_theatre();
        break;
        case 3:
        display_movie();
      case 4:
        select_movie();
        break;
      case 5:
        select_seats();
        break;
      case 6:
        select_refreshment();
      case 7:
        confirm_tickets();
        break;
      case 8:
        displayPaymentOptions();
        break;
      case 9:
        printf("Thank you for using our movie ticket booking system. Goodbye!\n");
        exit(0);
      default:
        printf("Invalid choice. Please try again.\n");
    }
  }

    return 0;
}