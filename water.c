#include <stdio.h>
#include <cs50.h>

int main(void)
{
   //prompt user for number of minutes
   printf("minutes: ");
   // number of minutes
   int m = get_int();
  //number of bottles
  int b = m*1.5*128/16;
  printf("bottles: %d\n", b);
}