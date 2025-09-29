/*
Name:Whitney Kageni
Reg No:CT101/G/26543/25
Description:program to determine the eligibility of a student for them to do an exam
*/
# include <stdio.h>
int main (){
    int average_marks;
    float attendance_in_percentage;

    printf("Enter your average marks:\n");
    scanf("%d",&average_marks);

    printf("Enter your class attendance(in percentage):\n");
    scanf("%f",&attendance_in_percentage);

    if(average_marks>=40&&attendance_in_percentage>=75){
        printf("\nYou are eligible.\n");
    }
    else{
        printf("\nNot eligible.\n");
    }
    return 0;
}

