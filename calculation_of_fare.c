    /*
    Name :Whitney Kageni
    Reg No : CT101/G/26543/25
    Description :  Program that calculates the fare for distance travelled in km
*/
# include <stdio.h>
int calculate_fare(int distance_inkm){
    int total_fare;
         total_fare=distance_inkm*50;
       return total_fare;
}
int main(){
   int distance_inkm;
   printf("Enter distance travelled in km:");
   scanf("%d",&distance_inkm);

   printf("This is your fare: Ksh%d\n",calculate_fare(distance_inkm));
   return 0;
  }

