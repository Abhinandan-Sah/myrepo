#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SEATS 50
#define MAX_NAME_LEN 50
#define MAX_TICKETS 10

struct Ticket {
    char name[50];
    int movieIndex;
    int seatNumber;
    float price;
};

struct User {
    char name[50];
    char email[50];
    char password[50];
    int numTickets;

    struct Ticket tickets[MAX_TICKETS];
};

int seats[MAX_SEATS];
char movie_name[MAX_NAME_LEN];
int num_seats;
int selected_seats[MAX_SEATS];
int num_selected_seats = 0;
struct User currentUser;

void registerUser() {
  FILE *fp = fopen("user_data.txt", "a");

  if(fp==NULL) {
    printf("Error opening file.\n");
    return;
  }
  printf("Registration:\n");
  printf("Enter your name: ");
  fgets(currentUser.name, MAX_NAME_LEN, stdin);
  currentUser.name[strcspn(currentUser.name, "\n")] = '\0';

  printf("Enter your email: ");
  fgets(currentUser.email, MAX_NAME_LEN, stdin);
  currentUser.email[strcspn(currentUser.email, "\n")] = '\0';

  printf("Enter your password: ");
  fgets(currentUser.password, MAX_NAME_LEN, stdin);
  currentUser.password[strcspn(currentUser.password, "\n")] = '\0';

  currentUser.numTickets = 0;

  fprintf(fp, "%s\n%s\n%s\n%d\n", currentUser.name, currentUser.email, currentUser.password, currentUser.numTickets);
  printf("Registration successful!\n\n");
  fclose(fp);
}


void select_theatre() {
  int tt;
  
  printf("ENTER 1 FOR IMAX THEATER\n");
  printf("ENTER 2 FOR PVR THEATER\n");
  scanf("%d",&tt);
  if (tt==1) printf("Nice, you have selected IMAX THEATER");
  else if (tt==2) printf("Nice, you have selected PVR THEATER");
  else printf("Enter valid theater code");
}
void display_movie() {
  printf("1. Blue Beetle\n");
  printf("2. John Wick 4\n");
  printf("3. Kisi Ka Bhai Kisi Ki Jaan\n");
  printf("4. Evil Dead Rise\n");
  printf("5. Extraction 2\n");
}
void select_movie() {
  FILE* fp = fopen("movie_data.txt", "a");

  if (fp == NULL) {
    printf("Error opening file.\n");
    return;
  }

  printf("Enter the name of the movie: ");
  fgets(movie_name, MAX_NAME_LEN, stdin);
  movie_name[strcspn(movie_name, "\n")] = '\0';

  printf("Enter the number of seats available: ");
  scanf("%d", &num_seats);
  getchar(); // Clear input buffer

  for (int i = 0; i < num_seats; i++) {
    seats[i] = 1; // Initialize all seats as available
  }

  fprintf(fp, "%s\n%d\n", movie_name, num_seats);
  printf("Movie '%s' with %d seats is now available for booking.\n", movie_name, num_seats);

  fclose(fp);
}

void select_seats() {
  int seat_num;

  while (1) {
    printf("Enter the seat number to select (or -1 to stop selecting): ");
    scanf("%d", &seat_num);
    getchar(); // Clear input buffer

    if (seat_num == -1) {
      break;
    }

    if (seat_num < 1 || seat_num > num_seats) {
      printf("Invalid seat number. Please try again.\n");
    } else if (seats[seat_num - 1] == 0) {
      printf("Seat %d is already booked. Please select another seat.\n", seat_num);
    } else {
      seats[seat_num - 1] = 0; // Mark the selected seat as unavailable
      selected_seats[num_selected_seats++] = seat_num;
      printf("Seat %d has been selected.\n", seat_num);
    }
  }

  printf("Selected seats: ");
  for (int i = 0; i < num_selected_seats; i++) {
    printf("%d ", selected_seats[i]);
  }
  printf("\n");
}

void select_refreshment(){
    char aa;
    printf("If you want any refreshment ,select (T/F):");
    scanf("%c",&aa);
    getchar();
    if(aa=='T'){
        printf("THNAKYOU! You will be provided with the refreshments\n");
        // break;
    }
    else if(aa=='F'){
        printf("NO PROBLEM! Thankyou for your time\n");
        // break;
    }
    else{
        printf("Enter valid choice\n");
    }
    // add break statement here
    return;
}


void confirm_tickets() {
  FILE* fp = fopen("booking_data.txt", "a");

  if (fp == NULL) {
    printf("Error opening file.\n");
    return;
  }

  fprintf(fp, "Movie: %s\n", movie_name);
  fprintf(fp, "Selected seats: ");
  for (int i = 0; i < num_selected_seats; i++) {
    fprintf(fp, "%d ", selected_seats[i]);
  }
  fprintf(fp, "\n");
  fprintf(fp, "Total cost: $%d\n", num_selected_seats * 10);

  printf("Confirm booking? (y/n): ");

  char confirm;
  scanf("%c", &confirm);
  getchar(); // Clear input buffer

  if (confirm == 'y') {
    fprintf(fp, "Booking confirmed. Enjoy the movie!\n");

    // Reset global variables for next booking
    memset(seats, 0, MAX_SEATS * sizeof(int));
    memset(movie_name, 0, MAX_NAME_LEN * sizeof(char));
    num_seats = 0;
    memset(selected_seats, 0, MAX_SEATS * sizeof(int));
    num_selected_seats = 0;

    printf("Booking confirmed. Enjoy the movie!\n");
  } else {
    fprintf(fp, "Booking cancelled.\n");
    printf("Booking cancelled.\n");
  }

  fclose(fp);
}

void displayPaymentOptions() {
    printf("Payment Options:\n");
    printf("1. Credit Card\n");
    printf("2. Debit Card\n");
    printf("3. Net Banking\n");
    printf("4. Wallet\n");
    int choice;
    printf("Which payment option do you want to use? :");
    scanf("%d", &choice);
    switch (choice) {
        case 1: {
            printf("Payment will be done through Credit Card\n");
            break;
        }
        case 2: {
            printf("Payment will be done through Debit Card\n");
            break;
        }
        case 3: {
            printf("Payment will be done through Net Banking\n");
            break;
        }
        case 4: {
            printf("Payment will be done through Wallet\n");
            break;
        }
        default:
            printf("Invalid choice.\n");
            break;
    }
}


int main() {
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
    getchar(); 

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
}