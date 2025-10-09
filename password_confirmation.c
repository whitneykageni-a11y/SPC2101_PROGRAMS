/*
Name:Whitney Kageni
Reg No:CT101/G/26543/25
Description:A program that prompts the user to enter a password until its correct
*/
# include <stdio.h>
int main (){
    int password=1234;
    int password_entered;
    do
    {
        printf("Enter your password:");
        scanf("%d",&password_entered);
    }while (password!=password_entered);
      printf("Access granted!");
    return 0;

}
