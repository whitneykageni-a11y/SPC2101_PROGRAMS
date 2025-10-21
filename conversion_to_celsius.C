    /*
    Name :Whitney Kageni
    Reg No : CT101/G/26543/25
    Description :  Program that converts Fahrenheit to Celsius
    */
    # include <stdio.h>
    float convertToCelsius( float  temp_Fahrenheit){
        int conversion;
             conversion=(temp_Fahrenheit-32)*5/9;
         return conversion;
    }
    int main (){
        float  temp_Fahrenheit;
             printf("Enter temperature in Fahrenheit:");
             scanf("%f",&temp_Fahrenheit);
             printf("Temperature in Celsius %.1f C\n",convertToCelsius(temp_Fahrenheit));
        return 0;
}
