#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void) {

int n;
int i;
i = 1;

// ask user for height and check
do
{
    printf("How tall do you want the pyramid to be?\n"); 
    n = GetInt();
    if (n < 0 || n > 23)
    {
    printf ("please pick a number greater than zero and less than 24 \n");
    }
}
while (n < 0 || n > 23);


// print pyramid
for (i = 0; i < n; i++)
{
    int j;
    j = 0;
    int k;
    k = 0;
    for (j = 0; j < (n-i-1); j++)
    {
    printf(" ");
    }
    for (k =0; k < i + 2; k++)
    {
    printf("#");
    }
    printf("\n");
}
}
