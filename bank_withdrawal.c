/*
Name:Whitney Kageni
Reg No:CT101/G/26543/25
Description:A program that alllows withdrawal of money from a bank
*/
#include <stdio.h>

int main() {
    int bank_balance;
    int amount_withdrawn;
    int new_balance;

    printf("Enter initial bank balance: ");
    scanf("%d", &bank_balance);

    printf("Enter amount to withdraw each time: ");
    scanf("%d", &amount_withdrawn);

    while (bank_balance > 0) {
        new_balance = bank_balance - amount_withdrawn;
        printf("New balance: %d\n", new_balance);

        bank_balance = new_balance;
    }

    printf("Account empty!\n");
    return 0;
}

