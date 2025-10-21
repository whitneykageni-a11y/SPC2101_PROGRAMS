    /*
    Name :Whitney Kageni
    Reg No : CT101/G/26543/25
    Description :  Program that calculates the electric bill after input of units consumed
*/
#include <stdio.h>

int calculateElectricBill(int units) {
    int bill;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
         bill = (100 * 10) + (units - 100) * 15;
    } else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return bill;
}

int main() {
    int units;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    printf("Total bill: KSh. %d\n", calculateElectricBill(units));
    return 0;

}
