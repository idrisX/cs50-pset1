#include <cs50.h>
#include <stdio.h>

int main(void)
{
int h=0;

    do
    {
    //prompt user for desired height
    printf("Input height\n");
     h=get_int();
    if (h==0)
    return 0;
    }
    while (h < 1 || h > 23); //ensure height is between 1 and 23

    //iteration of rows
    for (int i=0; i<h;i++)
    {
       //n is space character 
        for (int n=0; n<h-i-1;n++)
        {
            printf(" ");
        }
        //m is hashes
        for (int m=0; m<i+2;m++)
        {
            printf("#");  
        }
    printf("\n");
    }
}



    
    
