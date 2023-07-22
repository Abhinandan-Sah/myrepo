#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
struct records{
    
    char name[50] ;
    char phone_no[50];
    char  movie_id[50];
    long int  payment;

}rec;
int choice;

void registration(){
    printf("\n--REGISTRATION--\n\n");
    printf("Enter the Name: ");
    fflush(stdin);
    gets(rec.name);
    printf("Enter the Phone Number: ");
    fflush(stdin);
    gets(rec.phone_no);

} 
void display_movies(){
    printf("=======================================================================\n");
    printf("                   >>MOVIES ON SCREEN<<\n");
    printf("=======================================================================\n");
    printf("1) SPIDER-MAN No way home (M_ID-122)>>>> Show Time-12:00 - 3:00pm\n\n");
    printf("2) AVATAR - The way of water (M_ID-123)>>>> Show Time-3:00 - 6:00pm\n\n");
    printf("3) TITANIC (M_ID-124) >>>> Show Time-6:00 - 8:00pm\n\n");
    printf("4) THE LORD OF THE RINGS (M_ID-125)>>>> Show Time-8:00 - 11:00pm\n\n");
    printf("5) BLACK PANTHER (M_ID-126)>>>> Show Time-9:00 - 12:00am\n\n");
    char tk;
    printf("Do you want to book tickets[y/n] : ");
    scanf(" %c",&tk);
    if(tk=='y'||tk=='Y') {
        choice=2;
        return;
    }
    else{
        printf("--THANK YOU FOR VISITING--");
        exit(1);
        
    }

}
void booking(){
    printf("\nenter the movie id you want to book: ");
    scanf(" %s",rec.movie_id);
    if (strcmp(rec.movie_id,"122")==0){
        rec.payment=350;
    }
    else if(strcmp(rec.movie_id,"123")==0){
        rec.payment=400;

    }
    else if(strcmp(rec.movie_id,"124")==0){
        rec.payment=300;
                    
    }
    else if(strcmp(rec.movie_id,"125")==0){
        rec.payment=340;
                    
    }
    else if(strcmp(rec.movie_id,"126")==0){
        rec.payment=450;
                    
    }
    else{
        printf("\nYou have entered the wrong movie id.\n");
        printf("--THANK YOU FOR VISITING--");
        exit(1);
                    

    }

}
void payment(){
    printf("\n1)UPI[Phonpe/Google Pay]\n");
printf("2)DEBIT CARD/CREDIT CARD\n");
    
    int option;
    printf("\nenter the mode of payment: ");
    scanf("%d",&option);
    printf("Amount to be paid : %d\n",rec.payment);
    long long int upi_id;
    if(option==1){
        printf("Enter the UPI ID : ");
        scanf("%lld",&upi_id);

    }
    else if(option==2){
        long long int card_number;
        int cvv;
        printf("Enter the card number: ");
        scanf("%lld",&card_number);
        printf("Enter the CVV: ");
        scanf("%d",&cvv);

    }
    else {
        printf("\n!!!!Incorrect selection!!!!\n");
        printf("--THANK YOU FOR VISITING--");
        exit(1);
    }

}

int main(){
    FILE *fp,*ft;
    
    printf("\n------------WELCOME TO MOVIE TICKET BOOKING SYSYTEM------------\n");
    while(1){
        
        
        registration();
        if (strlen(rec.name)>0 && strlen(rec.phone_no)==10){
            printf("\nRegistration Successful\n\n");
            printf("1) DISPLAY THE MOVIES\n2) BOOK TICKET\n3) CANCEL TICKET \n4) BOOKING RECORDs \n5) EXIT\n");
            printf("\nEnter the choice: ");
            scanf("%d",&choice);
            
            if (choice==1){
                display_movies();
            }
            if(choice==2){
                fp=fopen("info.dat","ab+");
                booking();
                char pay;
                printf("\nDo you want to make the payment for the above selected movie[y/n] : ");
                scanf(" %c",&pay);
                if(pay=='y'||pay=='Y'){
                    
                    payment();
                    printf("\n--PAYMENT SUCCESSFUL--\n");
                    printf("You have successfully booked the ticket.\n");
                    
                    
                    fwrite(&rec,sizeof(struct records),1,fp);
                    

                    fclose(fp);

                }
                else{
                    printf("--THANK YOU FOR VISITING--\n");
                    fclose(fp);
                    break;

                }

            }
            if(choice==3){
                fp=fopen("info.dat","ab+");
                char name[50];
                char phone_no[15];
                
                
                printf("Enter the registered phone number: ");
                fflush(stdin);
                gets(phone_no);
                
                ft = fopen("temp.dat", "wb");
                while (fread(&rec, sizeof(struct records),1, fp)== 1) {
                    if((strcmp(rec.phone_no,phone_no)!=0)){
                        fwrite(&rec, sizeof(struct records), 1, ft);
                    }
                
                }
                printf("Ticket cancelled successfully\n");
                printf("Refund will soon be done into your respective bank account.\n");
                fclose(fp);
                fclose(ft);
                remove("info.dat");
                rename("temp.dat","info.dat");
  

            }
            if (choice==4){
                fp=fopen("info.dat","ab+");
                long int password;
                printf("Enter the password: ");
                scanf("%ld",&password);
                if(password==2183){
                    rewind(fp);
                    printf("\n===============================================================");
                    printf("\nNAME\t\tPHONE NUMBER\tMOVIE ID\tPAYMENT\n");
                    printf("===============================================================\n");
                    while (fread(&rec, sizeof(struct records),1, fp)== 1){
                        printf("\n%s\t%s\t%s\t\t%ld",rec.name, rec.phone_no, rec.movie_id,rec.payment);

                    }

                }
                
                else{
                    printf("You are not authorized to view the records!!!!\n");
                    printf("--THANK YOU FOR VISITING--\n");
                    break;
                }
                fclose(fp);
                

            }
            if (choice==5){
                printf("--THANK YOU FOR VISITING--\n");
                break;
            }
            char more;
            printf("\nDo you want to book more tickets?[y/n]: ");
            scanf(" %c",&more);
            if(more=='y'||more=='Y'){
                continue;
            }
            else{
                printf("\n--THANK YOU FOR VISITING--\n");
                break;
            }

        }
        else{

            printf("Enter the correct details\n");
            char ch;
            printf("Do you want to try again[y/n] :\t");

            scanf(" %c",&ch);
            if(ch=='y'||ch=='Y'){
                continue;
                
            }
            else if(ch=='n'||ch=='N'){
                printf("--THANK YOU FOR VISITING--");
                break;
            }
            else{
                printf("invalid choice\n");
                printf("--THANK YOU FOR VISITING--");
                break;
            }
        }
    }
}