#include <stdio.h>



int main(void)
{
    int 
    i,n=1,amount,bill,paid;

// Takes input form the user 
        printf("\n👋Hi!\n How can I help you today?\n");    
        printf("\n💰Total Bill:\n");    
        scanf("%i", &bill);

// Takes the total bill amount of the user
        printf("\n💸Amount paid by the user:\n");    
        scanf("%i", &paid);

// Makes the AMOUNT 
    if (paid>bill)
    {
        amount = (paid-bill);
        printf("\nAmount to be paid to the user is:%i\n", amount);
    }
    else if (bill>paid) 
    {
        amount = (paid-bill);
        i = (-1*amount);
        printf("\n👆Ask the coustomer to pay:%i\n", i);   
    }
    else (bill==paid);
    {
        printf("\n");
    }

/* 
        End data collection here
*/
        //2000 INR
        while (amount>=2000 && amount!=(-n))
        {
            amount=amount-2000;
            printf("Pay a bill of 2000 INR🍣\n");
        }
        while (amount>=500 && amount!=(-n))
        {
            amount=amount-500;
            printf("Pay a bill of 500 INR✋👌👌\n");
        }
        while (amount>=200 && amount!=(-n))
        {
            amount=amount-200;
            printf("Pay a bill of 200 INR✌👌👌\n");
        }while (amount>=100 && amount!=(-n))
        {
            amount=amount-100;
            printf("Pay a bill of 100 INR👆👌👌\n");
        }while (amount>=50 && amount!=(-n))
        {
            amount=amount-50;
            printf("Pay a bill of 50 INR👋👌\n");
        }while (amount>=20 && amount!=(-n))
        {
            amount=amount-20;
            printf("Pay a bill of 20 INR👐👐\n");
        }while (amount>=10 && amount!=(-n))
        {
            amount=amount-10;
            printf("Pay a bill of 10 INR👐\n");
        }while (amount>=2000 && amount!=(-n))
        {
            amount=amount-5;
            printf("Pay a bill of 5 INR✋\n");
        }while (amount>=2 && amount!=(-n))
        {
            amount=amount-2;
            printf("Pay a bill of 2 INR✌\n");
        }while (amount>=1 && amount!=(-n))
        {
            amount=amount-1;
            printf("Pay a coin of 1 INR👆\n");
        }
        printf("Good Day!\n");
        

    return 0;
        
}

