/*
Name:Whitney Kageni
Reg No:CT101/G/26543/25
Description:program to compute amount payable for data bundles
*/
# include <stdio.h>
int main (){
    int number;

    printf("\nAvailable data bundles:\n\n1. 100MB-50kes\n\n2. 500MB-200kes\n\n3. 1GB  -350kes\n\n4. 2GB  -600kes\n");

    printf("Choose your data bundle(1-4)\n");
    scanf("%d",&number);

    switch (number){
        case 1:
               printf("You have chosen 100MB amount to be paid 50kes");
               break;
        case 2:
               printf("You have chosen 500MB amount to be paid 200kes");
               break;
        case 3:
               printf("You have chosen 1GB amount to be paid 350kes");
               break;
        case 4:
               printf("You have chosen 2GB amount to be paid 600kes");
               break;
        default:
               printf("invalid choice");
               break;
    }
    return 0;
}
