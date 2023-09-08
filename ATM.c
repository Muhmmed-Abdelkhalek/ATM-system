/**
 ******************************************************************************
 * @file           : ATM Bank Management System
 * @author         : Mohamed Abdelkhalek
 * @brief          : Contains the functionality of my application
 ******************************************************************************
 */
/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
/* ********************** Includes Section End ********************** */
struct ATM
{
    unsigned int acon;
    unsigned int amount;
};
struct ATM A1;
/* ********************** Global Decleration Section Start ************ */
void Design(void);
void CreAcc(void);
void DepAm(void);
void Withd(void);
void CheBal(void);
void Exit(void);
/* ********************** Global Decleration Section End ************ */

int main ()
{
    unsigned char cho = 0,counter = 0;
    unsigned char ch1,ch2,ch3,ch4;
Try_01:
    counter++;
    printf("\t Enter Your Password : ");
    ch1 = getch();
    printf("*");
    ch2 = getch();
    printf("*");
    ch3 = getch();
    printf("*");
    ch4 = getch();
    printf("*");
    printf("\n\t Please Wait ");
    for (int i = 0; i < 3; i++)
    {
        printf(".");
        Sleep(250);
    }

    if(ch1 == '1' && ch2 == '2' && ch3 == '3' && ch4 == '4')
    {
        do
        {
Try_02:
            Design();
            printf("\t Enter Your Choice : ");
            scanf("%i", &cho);

            switch(cho)
            {
            case 1 :
                CreAcc();
                break;
            case 2 :
                DepAm();
                break;
            case 3 :
                Withd();
                break;
            case 4 :
                CheBal();
                break;
            case 5 :
                Exit();
                break;
            default :
                printf("\t Invalid Choice, Please select a possible choise \n");
                goto Try_02;
                break;
            }
        }
        while (cho != 5);

    }
    else
    {
        printf("\n\t Your Pin is Incorrect");
        if(counter == 3)
        {
            printf("\n\t Sorry, you have exceeded the number of attempts allowed\n");
            exit(0);
        }
        printf("\n\t Try Again\n");
        Sleep(500);
        goto Try_01;
    }

    return 0;
}

void Design(void)
{
    printf("\n\n-------- ATM Banking Mangement System --------\n\n");
    printf("\t 1.Create Account\n");
    printf("\t 2.Cash Deposit\n");
    printf("\t 3.Cash Withdrawal\n");
    printf("\t 4.Balance Inquiry\n");
    printf("\t 5.Exit\n\n");
    printf("----------------------------------------------\n");
}
void CreAcc(void)
{
    printf("\t Enter Your Account Number : ");
    scanf("%d", &(A1.acon));
    printf("\t Enter Your Amount : ");
    scanf("%d", &(A1.amount));
    printf("\n\t Please Wait ");
    for (int i = 0; i < 3; i++)
    {
        printf(".");
        Sleep(250);
    }
    printf("\n\t operation compeleted successfully");
}
void DepAm(void)
{
    unsigned int Val = 0;
    printf("\t Enter Your Amount For deposit : ");
    scanf("%d", &Val);
    A1.amount += Val;
    printf("\n\t Please Wait ");
    for (int i = 0; i < 3; i++)
    {
        printf(".");
        Sleep(250);
    }
    printf("\n\t operation compeleted successfully\n");
    printf("\t Your money after depositing is equal : %d\n", A1.amount);
}
void Withd(void)
{
    unsigned int Val = 0;
    printf("\t Please enter the amount you want to withdraw  : ");
    scanf("%d", &Val);
    if(Val > A1.amount)
    {
        printf("\t Insufficien Balance ");
    }
    else
    {
        A1.amount -= Val;
        printf("\t Please wait for your cash");
        for (int i = 0; i < 3; i++)
        {
            printf(".");
            Sleep(250);
        }
        printf("\n4\t Your money after withdrawing the amount is equal : %d\n", A1.amount);
    }

}
void CheBal(void)
{
    printf("\n\t Please Wait ");
    for (int i = 0; i < 3; i++)
    {
        printf(".");
        Sleep(250);
    }
    printf("\n\t Your current Balance is equal : %d\n", A1.amount);
}
void Exit(void)
{
    printf("\n\t Please Wait ");
    for (int i = 0; i < 3; i++)
    {
        printf(".");
        Sleep(250);
    }
    printf("\n\t Thank You For Banking \n");
    exit(0);
}

/**
 ******************************************************************************
 User                    Date                 Brief
 ******************************************************************************
 Bank Customer           07Sep2023            Banking
*/
