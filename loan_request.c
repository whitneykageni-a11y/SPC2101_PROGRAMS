// Loan approval program
# include <stdio.h>

int main(){
    int age;
    float income;

    printf("Please enter your age:");
    scanf("%d",&age);

    printf("Please enter your income:");
    scanf("%f",&income);

    if(age>21 && income>=21000){
        printf("Congratulations you qualify for a loan\n");
    } else{
        printf("Unfortunately ,we are unable to offer you a loan at this time\n");

    }

    return 0;
}
