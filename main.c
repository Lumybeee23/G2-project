#include <stdio.h>
#include <stdlib.h>
void wlcmmsg()
{
    printf("\n\n\n\n\n");
printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                  WELCOME                  =");
    printf("\n\t\t\t        =                     TO                    =");
    printf("\n\t\t\t        =                MovieTicket                =");
    printf("\n\t\t\t        =               Booking  System             =");
    printf("\n\t\t\t        =                                           =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
}
void movie_details()
{
printf("\n\n\n\t\t\tAvailable Movies:");
    printf("\n\t\t\t\t1.Frozen//Prize-300//language-English");
    printf("\n\t\t\t\t2.The Avengers//Prize-400//language-English");
    printf("\n\t\t\t\t3.Onward//Prize-200//language-English");
    printf("\n\t\t\t\t4.Aquaman//Prize-100//language-English");
    printf("\n\t\t\t\t5.Cruella//Prize-500//language-English");
}
void moviecho()
{
    int a;
    printf("\nEnter movie choice:");
    scanf("%d",&a);

    switch(a)
    {
    case 1:
         printf("\n\t\t\t\t1.Frozen//Prize-300//language-English");
         break;
    case 2:
        printf("\n\t\t\t\t2.The Avengers//Prize-400//language-English");
        break;
    case 3:
         printf("\n\t\t\t\t3.Onward//Prize-200//language-English");
         break;
    case 4:
        printf("\n\t\t\t\t4.Aquaman//Prize-300//language-English");
        break;
    case 5:
         printf("\n\t\t\t\t5.Cruella//Prize-300//language-English");
         break;
    default:
        printf("Invalid");
    }


}
void schedule()
{
  printf("\n\n\n\t\t\tAvailable Times: ");
  printf("\n\t\t\t\t1. 11:00 AM");
  printf("\n\t\t\t\t2. 02:00 PM");
  printf("\n\t\t\t\t3. 04:00 PM");
  printf("\n\t\t\t\t4. 06:00 PM");
  printf("\n\t\t\t\t5. 08:00 PM");
  printf("\n\t\t\t\t6. 10:00 PM");


    int time;
    printf("\nEnter your time: ");
    scanf("%d",&time);
    switch(time)
    {
    case 1:
        printf("\n\t\t\t\tYOU HAVE CHOOSEN 11:00 AM");
        break;
    case 2:
        printf("\n\t\t\t\tYOU HAVE CHOOSEN 02:00 PM");
        break;
    case 3:
        printf("\n\t\t\t\tYOU HAVE CHOOSEN 04:00 PM");
        break;
    case 4:
        printf("\n\t\t\t\tYOU HAVE CHOOSEN 06:00 PM");
        break;
    case 5:
        printf("\n\t\t\t\tYOU HAVE CHOOSEN 08:00 PM");
        break;
    case 6:
        printf("\n\t\t\t\tYOU HAVE CHOOSEN 10:00 PM");
        break;
    default:
        printf("Invalid");
    }

}
void seats()
{
 int total_seat;
 printf("\n***Total number of tickets: ");
 scanf("%d",&total_seat);
 if(total_seat>=3)
              {
                  printf("You can't book those amount of tickets\n");
                  printf("Please book maximum 2 tickets\n");
                  printf("\nPlease re-enter total number of tickets: ");
                  scanf("%d",&total_seat);
            }
            else
                printf("You want to bought %d ticket/s",total_seat);

       int i,j;
       printf("\n\t\t\t\t                                   SCREEN\n\n\n");
       for(i=1;i<40;i++)
       {
           printf("%d\t",i);

           printf("\t",i);
           if(i%10==0)
           printf("\n\n");
       }
        printf("\n Booked seats\n");
        for(i=1;i<=total_seat;i++)
        {
        printf("\n Choose seat number: ");
       scanf("%d",&j);
        }

           while(j!=0)
           {

               if(j<40)
              {
                   printf("You have booked tickets!");
                   break;
              }
                else if(j>=40)
              {
                  printf("%d no seat is unavailable in this theater\n",j);
                 printf("\nPlease re-enter seat number: ");
                 scanf("%d",&j);
                  printf("You have succesfully bought tickets!");
                  break;
              }

             else
                printf("Invalid\n");

                j++;

           }

}
void buytic()
{
    char n[20];
    int mobile;
    int ticket,amount,num,movie_n,time,cost;
    printf("\n Fill Details ******");
              printf("\n Your name: ");
              scanf("%s",n);
              printf("\n Mobile number: ");
              scanf("%d",&mobile);
              printf("\nYou have bought tickets: ");
              scanf("%d",&ticket);
              printf("\nEnter the serial number of movie(1 to 5): ");
              scanf("%d",&num);
              switch(num)
              {
              case 1:
                amount=300*ticket;
                printf("Your bill is %d",amount);
                break;
              case 2:
                amount=400*ticket;
                printf("Your bill is %d",amount);
                break;
               case 3:
                amount=200*ticket;
                printf("Your bill is %d",amount);
                break;
               case 4:
                amount=100*ticket;
                printf("Your bill is %d",amount);
                break;
              case 5:
                amount=500*ticket;
                printf("Your bill is %d",amount);
                break;
              default:
                printf("Invalid");
              }
    printf("\t\t\t\t          PAYMENT                          \n");
  printf("\t\t\t\t\t*****************SHONALI BANK********************\n");
  printf("\n Merchant Number : 01234567890\n");
  printf("\nYour Number:%d\n",mobile);
  printf("\n Total Amount:%d TK\n",amount);
  printf("\n\n\n\t\t\t\t**************Booking Confirmed********** \n");
  printf("\n\n\n\t\t\t\t**************ENJOY YOUR MOVIE********** \n");


}
  void cancel()
{
    int n;
    printf("Enter the serial no you have choosen for watching movie: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
         printf("\n\t\t\t\t1.Frozen//Prize-300//language-English");
         break;
    case 2:
        printf("\n\t\t\t\t2.The Avengers//Prize-400//language-English");
        break;
    case 3:
         printf("\n\t\t\t\t3.Onward//Prize-200//language-English");
         break;
    case 4:
        printf("\n\t\t\t\t4.Aquaman//Prize-300//language-English");
        break;
    case 5:
         printf("\n\t\t\t\t5.Cruella//Prize-300//language-English");
         break;
    default:
        printf("Invalid");
    }
    int mobile,n1;
    char name[20];
    printf("\nEnter your name: ");
    scanf("%s",name);
    printf("\nEnter your mobile number: ");
    scanf("%d",&mobile);
    printf("\nAre you sure that you want to cancel your ticket(Enter 1 if yes or Enter 0 if no)");
    printf("\nYour answer: ");
    scanf("%d",&n1);
    if(n1==1)
        printf("You have cancelled the show");
    else if(n1==0)
        printf("You didn't cancel the show");
    else
        printf("Invalid");


}
void main()
{

   int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="username";
    char pass[10]="password";

    do
{

        printf("\n\t\t\t*************************************************** ");
        printf("\n\t\t\t***************** LOGIN FIRST ********************* ");
        printf("\n\t\t\t*************************************************** ");
        printf("\n\nENTER USERNAME:- ");
        scanf("%s",&uname);
        printf("ENTER PASSWORD:- ");
        while(i<10)
        {
            pword[i]=getch();
            c=pword[i];
            if(c==13)
                break;
            else
                printf("*");
            i++;
        }

   pword[i]='\0';
 //char code=pword;
   i=0;
 //scanf("%s",&pword);
   if(strcmp(uname,"username")==0 && strcmp(pword,"password")==0)
   {
       printf("\n\t\t\t*****************  LOGIN IS SUCCESSFUL  ********************");
       printf("\n\t\t\t************** WELCOME TO OUR BOOKING SYSTEM   *************");
       printf("\n\t\t\t\t                           Press any key to continue ....");
       getch();//Holds the screen
       break;
   }
   else
   {
     printf("\n                                     LOGIN IS  UNSUCCESSFUL \n Try again !!!\n");
     a++;
     getch();//holds the screen
   }
}

   while(a<=2);
   if(a>2)
   {
     printf("\n Sorry you have entered the wrong username and password for three times !!!");
     getch();
     exit(0);
   }


    wlcmmsg();
    movie_details();

    int num;

        printf("\n\t\t\t**********************************************");
        printf("\n");
        printf("\n\t\t\t          MOVIE TICKET BOOKING                  ");
        printf("\n");
        printf("\n\t\t\t**********************************************");
        printf("\n");
        printf("\nFor choosing movie you have to follow step by step\n");
        printf("\nIf you have purchased a ticket before just enter 5 to cancel your ticket\n");
    do{
        printf("\n****Please follow step by step****\n");
        printf("\nEnter <1>For Choosing Movie\n");
        printf("Enter <2> For choosing Time\n");
        printf("Enter <3> For seats\n");
        printf("Enter <4> for buying tickets\n");
        printf("Enter <5> for cancelling tickets\n");
        printf("Enter <0> To Exit\n");

        printf("Enter Your Choice(1 to 5) :: ");
        scanf("%d",&num);

        switch(num)
        {
           case 1:
                  moviecho();
           break;

           case 2:
                 schedule();
           break;

           case 3:
                 seats();
           break;

           case 4:
                 buytic();
           break;

           case 5:
                 cancel();
           break;

           case 0:
                 exit(0);
            break;

           default:
              printf("Wrong choice!");
           break;
        }
    } while (num!=0);

}



