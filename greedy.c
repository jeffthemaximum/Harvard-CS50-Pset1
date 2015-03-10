#include <cs50.h>
#include <stdio.h>
#include <math.h>

// Prompt user of an amount of change
int main (void){
    printf("How much money do you have? \n");
    float x;
    x  = GetFloat();
    if (x <= 0)
    printf("Please provide a number greater than zero.\n");
//This is just here to test to make sure everyhing is going smoothly    
//    else
//    printf("%f \n",x);

//Get amount in dollars
    int y;
    y = floor(x * 100 + 0.5);
    
//While (quarters can be used)
//  increase count
//  amount decrease by a quarter
    int quarters;
    quarters = 0;
    while (25<=y) {
    quarters = quarters + 1;
    y = y + (-25);
    }
    
//While (dimes can be used)
//  increase count
//  amount decrease by a dime
    int dimes;
    dimes = 0;
    while (10<=y) {
    dimes = dimes + 1;
    y = y + (-10);
    }
    
//While (nickels can be used)
//  increase count
//  amount decrease by a nickel
    int nickels;
    nickels = 0;
    while (5<=y) {
    nickels = nickels + 1;
    y = y + (-5);
    }
    
//While (pennies can be used)
//  increase count
//  amount decrease by a penny
    int pennies;
    pennies = 0;
    while (1<=y) {
    pennies = pennies + 1;
    y = y + (-1);
    }

//print number of coins used
    printf("You get %i quarters\n",quarters);
    printf("You get %i dimes\n",dimes);
    printf("You get %i nickels\n",nickels);
    printf("You get %i pennies\n",pennies);
}
