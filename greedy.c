#include <cs50.h>
#include <stdio.h>

int main(void)

{
//declaring variables
int n=0;
int i=0;
    //prompt user for amount of change
    do
    {
        printf("How much change is owed?\n");
        float f = get_float();
        n = (int)(f*100);
    }
    while(n<0);
    //collect quaters
    while(n>=25)
    {
    i=i+1;
    n=n-25;
    }
    //collect dimes
    while(n>=10)
    {
    i=i+1;
    n=n-10;
    }
    //collect nickles
    while(n>=5)
    {
    i=i+1;
    n=n-5;
    }    
    //collect pennies
    while(n>=1)
    {
     i=i+1;
     n=n-5;
    }
    //show user amount if only 1 coin
    if(i==1)
    {
      printf("You get %d coin\n",i);
    }
    else //show user amount of coins if multiple coins
    {
      printf("You get %d coins\n",i);
    }
  return 0;
}








