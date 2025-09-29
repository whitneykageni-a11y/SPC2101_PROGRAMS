/*
Name:Whitney Kageni
Reg No:CT101/G/26543/25
Program:Water_bill_calculation
*/
# include <stdio.h>
int main (){
    int water_units;
    double total_water_bill;

    printf("Enter your water units:\n");
    scanf("%d",&water_units);

    if(water_units<=30){
        total_water_bill=water_units*20;
    }
    else if(water_units>=31&& water_units<=60){
        total_water_bill=water_units*25;
    }
    else{
        total_water_bill=water_units*30;
    }

    printf("\nWater units:%d\n",water_units);
    printf("\nTotal water bill %.2lfkes\n",total_water_bill);
    return 0;
}
